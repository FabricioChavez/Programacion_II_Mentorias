#include <iostream>
#include "math.h"
using  namespace std;
double rescursive_sum(int n , int m){
    if(m==1)
        return 1.0;
    else return double(1)/double(pow(m,n))+rescursive_sum(n ,m-1);

}
int main(){
    int m , n;

    cout<<"m: ";cin>>m;

    cout<<endl;
    cout<<"n: "; cin>>n;
    cout<<"Sumartoria de potencia a la "<<m<<"hasta el numerp ("<<n<<") "<<rescursive_sum(n,m);
    return 0;
}