#include <iostream>
#include <cmath>
using namespace std;
void calcularValores(float * p1 , float * p2)
{   float* temp=p1;
    *p1=(*p1)*(*p2);
    *p2= pow(*temp,*p2);


}
void imprimirValores(float * p1 , float * p2)
{
    calcularValores(p1,p2);
    cout<<"La direccion de n1 es :"<<p1<<endl;
    cout<<*p1<<endl;
    cout<<"La direccion de n2 es :"<<p2<<endl;
    cout<<*p2<<endl;

}
void recibirDatos(float & n1 , float & n2){

    cout<<"n1 :";
    cin>>n1;
    cout<<"n2 :";
    cin>>n2;
    cout<<endl;
    float *p1=&n1;
    float *p2=&n2;
    imprimirValores(p1,p2);




}



int main()
{
    float n1, n2;
    recibirDatos(n1,n2);

    return 0;
}

