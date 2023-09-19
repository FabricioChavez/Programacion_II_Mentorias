#include <iostream>
#include <vector>
#include <iomanip>
using  namespace std;
int power(int a , int n)
{
    if(n==0)
        return 1;
    else return  a*power(a,n-1);
}
void imprimirValores(int * ptr1 ,int * ptr2 );
void calcularValores(int * ptr1 ,int * ptr2 );
void recibirDatos(){

     int a = rand()%6+2;
     int b = rand()%6+2;
     int * ptra= &a;
     int * ptrb = &b;
    imprimirValores(ptra, ptrb);
}

void imprimirValores(int * ptr1 ,int * ptr2 )
{
    cout<<"NUMERO GENERADO N1 :"<< *ptr1 <<endl;
    cout<<"NUMERO GENERADO N2 :"<< *ptr2 <<endl;
    calcularValores(ptr1 , ptr2);
    cout<<"La direccion de n1 es :"<< ptr1 <<endl;
    cout<<"El nuevo valor de n1 es "<<*ptr1<<endl;
    cout<<"La direccion de n2 es :"<< ptr2 <<endl;
    cout<<"El nuevo valor de n2 es "<<*ptr2<<endl;

}

void calcularValores(int * ptr1 ,int * ptr2 )
{
    int n1 = *ptr1;
    *ptr1 = (n1)*(*ptr2);
    *ptr2 = power(n1,*ptr2);
}


int main()
{
    srand(time(nullptr));
 recibirDatos();

}