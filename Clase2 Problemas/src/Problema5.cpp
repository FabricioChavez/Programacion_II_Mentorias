#include "iostream"
#include "cmath"
#include "numeric"
#include "string"
using namespace std;
void calculadora(string operation ,int a , int b , int  c , int  d ) {

    int temp=0;
    int temp2=0;
    if (operation == "suma") {
        temp = (a * d + b * c);
         temp2 = b * d;

    } else if (operation == "Producto") {

         temp = a * c;
        temp2 = b * d;
    }
        else if (operation == "maximo") {
            if (a * d > c * d) {
                temp = a;
                 temp2 = b;
            } else {
                 temp = c;
                temp2 = d;

            }

        }
    int gc = gcd(temp, temp2);
    temp = temp / gc;
    temp2 = temp2 / gc;
    cout<<temp<<"/"<<temp2;

}
int main()
{
    int a ,b;
    int c , d;
    cout<<"primer quebrado"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"segundo quebrado"<<endl;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    cout<<endl;
    cout<<"ingrese la operacion "<<endl;
    string s;
    cin>>s;
    calculadora(s,a,b,c,d);
    return 0;
}