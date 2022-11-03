#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Jogador{
    private:
    int row, col, check;

    public:
    int placar;
    Jogador(){}
    Jogador(int placar, int row,int col,int check):
        placar(placar), row(row), col(col), check(check){
        }
        
    ~Jogador(){};
    
    void PlayerMove(int board[][3])
    {
        do{
            cout<<"Linha: ";
            cin >>row;
            cout<<"Coluna: ";
            cin >> col;
            row--; col--;

            check = board[row][col] || row<0 || row>2 || col<0 || col>2;
            if(check)
                cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;

        }while(check);
        
        board[row][col]=1;
    
    }

    
};

class Computador{
    private:
    int  row, col, check, acc_row = 0, acc_col = 0;

    public:
    int placar, dificuldade;
    Computador(){}
    Computador(int placar, int dificuldade, int row,int col,int check,int acc_row,int acc_col):
        placar(placar), dificuldade(dificuldade){
            acc_row = 0;
            acc_col = 0;
        }
    ~Computador(){};

    void ComputerMove(int board[][3])
    {
        srand(time(0));
        if(dificuldade == 1){
            do{

                row = acc_row;
                col = acc_col;

                check = board[row][col] || row<0 || row>2 || col<0 || col>2;

                acc_col++;
                if(acc_col == 3){
                    acc_col = 0;
                    acc_row++;
                }
                if(acc_row == 3){
                    acc_row = 0;
                }

            }while(check);
        }
        else if(dificuldade == 2){
            do{

            row = rand() % 3;
            col = rand() % 3;

            check = board[row][col] || row<0 || row>2 || col<0 || col>2;

            }while(check);

        }
        else{
            do{
            row = acc_row;
            col = acc_col;

            check = board[row][col] || row<0 || row>2 || col<0 || col>2;

            acc_row++;
            if(acc_row == 3){
                acc_row = 0;
                acc_col++;
            }
            if(acc_row == 3){
                acc_row =0;
            }
            }while(check);
        }

        board[row][col]=-1;
    }

};

class Tabuleiro{
    private:
    int block ,turn, cont, row, col, sum;

    public:
    int board[3][3];
    int win;

    Jogador *jogador;
    Computador *computador;
    Tabuleiro(){};
    Tabuleiro(int win, int ,int block, int turn,int cont, Jogador *jogador, Computador *computador):
        win(win), jogador(jogador), block(block),turn(turn), cont(cont), computador(computador){
            turn = 0;
        }
    ~Tabuleiro(){};

    void init(){
        // inicia a matrix com 0 em todos os campos
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                board[i][j]=0;
                }
        }
    }

    char printBlock(int block)
    {
        // desenha X ou O
        if(block==0)
            return ' ';
        else if(block==1)
            return 'X';
        else
            return 'O';
    }

    void show()
    {
        // Desenha jogo da velha
        cout<<endl;
        for(int row=0 ; row<3 ; row++){
            cout<<" "<< printBlock(board[row][0]) <<" |";
            cout<<" "<< printBlock(board[row][1]) <<" |";
            cout<<" "<< printBlock(board[row][2]) <<endl;

            if(row!=2){
                cout<<"___ ___ ___\n"<<endl;
            }
        }
    }

    int checkContinue()
    //Verifica se continua o jogo
    {
        for(int i=0 ; i<3 ; i++)
            for(int j=0 ; j<3 ; j++)
                if(board[i][j]==0)
                    return 1;
        return 0;
    }

    int checkWin()
    {
        // Verifica se e se alguem ganhou

        // Adicionando linhas
        for(row=0 ; row<3 ; row++){
            sum=0;

            for(col=0 ; col<3 ; col++)
                sum += board[row][col];

            if(sum==3)
                return 1;
            if(sum==-3)
                return -1;
        }

        // Adicionando colunas
        for(col=0 ; col<3 ; col++){
            sum=0;

            for(row=0 ; row<3 ; row++)
                sum += board[row][col];

            if(sum==3)
                return 1;
            if(sum==-3)
                return -1;
        }

        // Adicionando diagonais
        sum=0;
        for(row=0 ; row<3 ; row++)
            sum += board[row][row];
        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;

        sum=board[0][2]+board[1][1]+board[2][0];
        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;

        return 0;
    }


    int game(Jogador jogador, Computador computador)
    {

        do{
            show();
            cout<<"Jogador "<<1+turn%2<<endl;
            if(turn%2 == 0){
                jogador.PlayerMove(board);
                turn++;
            }
            else{
                computador.ComputerMove(board);
                turn++;

            }

            cont=checkContinue();
            win = checkWin();
        }while(cont && !win);

        if(win==1){
            cout<<"Jogador ganhou!\n"<<endl;
            win = 1;
        }else
            if(win==-1){
                cout<<"Computador ganhou!\n"<<endl;
                win = 2;
        }else
            cout<<"Empate\n"<<endl;
        return 0;
    }
    
    Tabela(Jogador *jogador, Computador *computador){
        // Mostra a pontuacao do player e computador
            if(win == 1)
                jogador->placar = jogador->placar + 1;
            if(win == 2)
                computador->placar = computador->placar + 1;
            cout<<"Placar: "<<endl;
            cout<< "Player: "<<jogador->placar<<" x "<< "Computador: "<<computador->placar<<endl;

            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    board[i][j]=0;
                }
            }
        }
};

int main()
{
    Tabuleiro tabuleiro;
    Jogador jogador;
    Computador computador;
    jogador.placar = 0;
    computador.placar = 0;
    tabuleiro.init();

    int cont=0, result;
     do{
        cout<<"0. Sair"<<endl;
        cout<<"1. Jogar!"<<endl;
        cin >> cont;
      

        if(cont == 1){
            cout<<"Qual modo vai escolher?"<<endl;
            cout<<"1. facil"<<endl;
            cout<<"2. medio!"<<endl;
            cout<<"3. dificil!"<<endl;
            cin >> computador.dificuldade;
            tabuleiro.game(jogador, computador);
            tabuleiro.show();
            tabuleiro.Tabela(&jogador, &computador);
        }
     }while(cont);
        return 0;
}