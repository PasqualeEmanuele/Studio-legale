#include <iostream>
using namespace std;

const int ORARIO_MIN = 9;
const int ORARIO_MAX = 19;
const int DIM = 20;

struct s_appuntamento{

    int codice;
    char nome[DIM+1];
    char cognome[DIM+1];
    long int numeroTelefono;
    int giorno;
    int mese;
    int ora;
    bool stato;

};

int menu();

int main(int argc, char *argv[]){

    if(argc<1&&argc>1){
        cout<<"ERRORE DI SINTASSI [ main [nome file] ]";
        exit(1);
    }
    
    FILE* archivio = fopen(argv[1],"wb");

    if(archivio==NULL){
        cout<<"Errore di apertura file "<<argv[1];
        exit(1);
    }

    s_appuntamento *appuntamento = new s_appuntamento;

    bool continua=true;

    while(continua){

        switch(menu())
        {
        case 0:
            continua=false;
            break;

        case 1:
            break;

        case 2:
            break;
        
        case 3:
            break;
        
        default:
            cout<<"Inserire un valore valido";
            break;
        }

    }

    return 0;
}

int menu(){

    int n; 

    cout<<"Menu:\n\n0) Esci.\n1) Aggiungere un nuovo appuntamento\n2) Modificare un appuntamento esistente\n3) Gestire la giornata odierna\n\nScelta:\n>";

    cin>>n;

    return n;
}