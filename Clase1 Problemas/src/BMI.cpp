#include <iostream>
#include <iomanip>
using namespace std;

int values(double n){

    if(n>= 18.5  and n <= 24.99)
        return 1;
    else if(n>= 25 and n <= 29.99)
        return 2;
    else if(n>= 30 and n <= 34.99)
        return 3;
    else if(n>=35 and n<=39.99)
        return 4;
    else if(n>=40)
        return 5;
    else return 0;

}
string texto(int n)
{

    switch (n) {
        case 1:
            return "Normal - RIESGO - Promedio \n";
            break;
        case 2:
            return "Sobrepeso - RIESGO - Aumentado \n";
            break;
        case 3:
            return "Obesidad grado I - RIESGO - Aumentado \n";
            break;
        case 4:
            return "Obesidad grado II - RIESGO - Severo \n";
            break;
        case 5:
            return "Obesidad grado II - RIESGO - Muy Severo \n";
            break;
        default:
            break;

    }


}

int main() {
double  objetivo= 20;
double peso ;
double altura;

cout<<"PESO (gr) :";
cin>>peso;
peso=double(peso)/double(1000.0);
cout<<"Estatura (cm) :";
cin>>altura;
altura=double(altura)/double(100.0);
double IMC= double(peso)/ double(altura*altura);
cout<<"CLASIFICACION "<<texto(values(IMC));
cout<<"Necesita perder "<<std::setprecision(4) << peso-(objetivo*altura*altura)<< " kg para IMC normal";


}
