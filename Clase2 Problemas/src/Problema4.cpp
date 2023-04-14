#include <iostream>
#include <cmath>
#include <iomanip>

int sombrero(double x ){

    return (x-int(x)!=0)?int(x)+1:int(x);
}
int zapato(double x)
{
    return int(x);

}

using namespace std;
int main() {
    double n;
    cout<<"Ingrese x:";
    cin>>n;
    cout<<"el entero inmediato o igual a x es :"<< sombrero(n)<<endl;
    cout<<"el entero inmediato o menor a x es :"<< zapato(n);
    return 0;
}