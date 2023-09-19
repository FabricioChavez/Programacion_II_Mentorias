#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
struct objeto{


};

int factorial (int n)
{
    if(n==0) return 1; //Caso Base
    else return n* factorial(n-1); // Case Recursivo

}




void fun(int  n  , string & cadena){

    for (int i = 0; i < n; ++i) {
        cadena+= to_string(rand()%10);
    }

}


string Binario(int n){

    if(n<2) return to_string(n);
    else return Binario(int(n/2))+ to_string(n%2);

}

double sumatoria ( int m , int n )
{
    if(m==1) return 1.0;
    else return double (1.0)/double(pow(m,n)) + sumatoria(m-1 , n);

}

int sombrero (double x){

    double exceso = x-int(x);
    if(exceso>0) return int(x)+1;

}

int suela_(double x){
    return int(x);
}

int escalones( int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else return escalones(n-1)+ escalones(n-2);

}

int recursive_max(vector<int > numbers, int s)
{
    if(s>0)
    {
        return max(numbers[s], recursive_max(numbers,s-1));
    }else return numbers[0];

}
int main(){

    int n;
  //  cin>>n;
    srand(time(nullptr));
 //   cin>>n; // size de mi string caracteres numericos aleatorios

    string vacia="";

 //   fun(n , vacia);

  //  cout<<sumatoria( 6 , 3)<<endl;

//  cout<<"SOMBRERO "<<sombrero(2)<<endl;
//  cout<<"ZAPATO   "<<suela_(2)<<endl;

//cout<<escalones(10)<<endl;

vector<int> num{7,6,7,2,6,100,23};
cout<<recursive_max(num, num.size()-1);


}