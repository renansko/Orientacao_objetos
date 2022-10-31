#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



class Jogador{
    private:
   

    public:
    int placar;
    Jogador(){}
    Jogador(int placar):
        placar(placar){
        }
        
    ~Jogador(){};
};

class Computador{
    private:

    public:
    int placar;
    int dificuldade;
    Computador(){}
    Computador(int placar, int dificuldade):
        placar(placar), dificuldade(dificuldade){
        }
    ~Computador(){};

};

class Tabuleiro{
    private:

    public:
    int win;
    Jogador *jogador;
    Computador *computador;
    Tabuleiro(){};
    Tabuleiro(int win, Jogador *jogador, Computador *computador):
        win(win), jogador(jogador), computador(computador){

        }
    ~Tabuleiro(){};

    Tabela(Jogador *jogador, Computador *computador){
    cout<<"Placar: "<<endl;
    cout<< "Player: "<<jogador->placar<<" x "<< "Computador: "<<computador->placar<<endl;
    }

};

void init(int board[][3]);          
char printBlock(int block);         
void show(int board[][3]);          
void PlayerMove(int board[][3]); 
int checkContinue(int *board[3]);   
int checkWin(int *board[3]);        
int game(int board[][3], Computador computador);           
void scoreboard(Tabuleiro tabuleiro, Jogador *jogador, Computador *computador); 





int main()
{
    int board[3][3];
    Tabuleiro tabuleiro;
    Jogador jogador;
    Computador computador;
    jogador.placar = 0;
    computador.placar = 0;

    int cont=0, result;
    
     do{
        cout<<"0. Sair"<<endl;
        cout<<"1. Jogar!"<<endl;
        cin >> cont;
        cout<<"Qual modo vai escolher?"<<endl;
        cout<<"1. facil"<<endl;
        cout<<"2. medio!"<<endl;
        cout<<"3. dificil!"<<endl;
        cin >> computador.dificuldade;

        if(cont == 1){
            init(board);
            tabuleiro.win = game(board, computador);
            show(board);
            scoreboard(tabuleiro, &jogador, &computador);
        }
     }while(cont);
        return 0;
}

void init(int board[][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j]=0;

}

char printBlock(int block)
{
    if(block==0)
        return ' ';
    else if(block==1)
        return 'X';
    else
        return 'O';
}

void show(int board[][3])
{
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

void PlayerMove(int board[][3])
{
    int row, col, check;
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



void ComputerMove(int board[][3], Computador computador)
{
    int row, col, check, acc_row = 0, acc_col = 0;
    srand(time(0));
    if(computador.dificuldade == 1){
    do{
        
        row = acc_row;
        col = acc_col;

        check = board[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;
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
    else if(computador.dificuldade == 2){
        do{
   
    
        row = rand() % 3;
        col = rand() % 3;
 

        check = board[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;

    }while(check);

    }
    else{
        do{
        row = acc_row;
        col = acc_col;

        check = board[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;
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

int checkContinue(int board[][3])
{
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(board[i][j]==0)
                return 1;
    return 0;
}

int checkWin(int board[][3])
{
    int row, col, sum;

    // Adding the lines
    for(row=0 ; row<3 ; row++){
        sum=0;

        for(col=0 ; col<3 ; col++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the columns
    for(col=0 ; col<3 ; col++){
        sum=0;

        for(row=0 ; row<3 ; row++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the diagonals
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

int game(int board[][3], Computador computador)
{
    int turn=0, cont, win;

    do{
        show(board);
        cout<<"Jogador "<<1+turn%2<<endl;
        if(turn%2 == 0){
            PlayerMove(board);
            turn++;
        }
        else{
            ComputerMove(board, computador);
            turn++;

        }
        

        cont=checkContinue(board);
        win = checkWin(board);
    }while(cont && !win);

    if(win==1){
        cout<<"Jogador 1 ganhou!\n"<<endl;
        return 1;
    }else
        if(win==-1){
            cout<<"Computador ganhou!\n"<<endl;
            return 2;
    }else
        cout<<"Empate\n"<<endl;
    return 0;
}

void scoreboard(Tabuleiro tabuleiro, Jogador *player, Computador *computador)
{
    if(tabuleiro.win == 1)
        player->placar = player->placar + 1;
    if(tabuleiro.win == 2)
        computador->placar = computador->placar + 1;

    tabuleiro.Tabela(player, computador);

}