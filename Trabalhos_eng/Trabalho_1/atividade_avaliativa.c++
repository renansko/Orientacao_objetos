#include <iostream>
#include <string>

using namespace std;

class Horario{
    
    //Atributos
    public:
    int Hora;
    int Minuto;
    int Segundo;
    int dia = 0;
    int sobra = 0;

    //Método
    void horarios(){
          cout << "Horario: " << "0" << " Dia " << Hora << "h" << Minuto << "Min" << Segundo << "seg" <<endl;
          cout << "" << endl;
          cout << "" << endl;
    }

    //Método
    void soma(Horario hora1, Horario hora2)
    {
    int horatotal = hora1.Hora+hora2.Hora;
    int minutototal = hora1.Minuto+hora2.Minuto;
    int segundototal = hora1.Segundo+hora2.Segundo;
    while(segundototal > 59 || minutototal > 59  || horatotal > 23)
    {
        if(segundototal > 59){
            minutototal++;
            segundototal = segundototal - 60;
        }
        if(minutototal > 59){
            horatotal++;
            minutototal = minutototal - 60;
        }
        if(horatotal > 23){
            horatotal = horatotal - 24;
            dia = dia + 1;
        }
    }
        cout << "" << endl;
        cout << "Total: " << dia << " Dia " << horatotal << "h" << minutototal << "Min " << segundototal << "seg" <<endl;
        cout << "" << endl;

    }
};

int main(){
    cout << "Digite o primeiro horario!" << endl;

    Horario hora1;
    Horario hora2;
    Horario total;

    cout << "que horas sao?!" << endl;
    cin >> hora1.Hora;
    cout << "Quantos minutos?" << endl;
    cin >> hora1.Minuto;
    cout << "Quantos Segundos?" << endl;
    cin >> hora1.Segundo;

    cout << "Primeiro horario!" << endl;
    hora1.horarios();

    
    cout << "que horas sao?!" << endl;
    cin >> hora2.Hora;
    cout << "Quantos minutos?" << endl;
    cin >> hora2.Minuto;
    cout << "Quantos Segundos?" << endl;
    cin >> hora2.Segundo;

    cout << "Segundo horario" << endl;
    hora2.horarios();


    cout << "total" << endl;
    total.soma(hora1, hora2);

};