#include <iostream>
#include <cmath>
using namespace std;
void B( char * secuencia);
void A( char * secuencia){

    if(secuencia[0]=='a')
        A(secuencia+1);
    else if(secuencia[0]=='r')
        B(secuencia+1);
    else {
        cout<<"NO ES POSIBLE ENSAMBLAR ESTA PIEZA en A...";
        return;
    }
}

void B( char * secuencia){
    if(secuencia[0]=='b')
        B(secuencia+1);
    else if(*(secuencia+1)=='\0' )
        {
        cout<<"ENSAMBLAJE EXITOSO"<<endl;
            return;
        }
    else {
        cout<<"NO ES POSIBLE ENSAMBLAR ESTA PIEZA en B...";
        return;
    }
}

void ensamblaje(char * secuencia)
{
    A(secuencia);

}

int main()
{
    char cad[255];
    gets(cad);
    ensamblaje(cad);

    return 0;
}

