#include <iostream>
#include <vector>
#include <iomanip>
using  namespace std;
int const N = 7;
int power(int a , int n)
{
    if(n==0)
        return 1;
    else return  a*power(a,n-1);
}
void Fill_binary(int *a ){
    for (int i = 0; i < N; ++i) {
//        *(a+i)=rand()%2; Forma alternativa de asignar
          a[i]=rand()%2;
    }
}
void printArr(int *a ){
    for (int i = 0; i < N; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int Binary2Dec(int *a)
{
    int sum=0;
    for (int i = 0; i < N+1; ++i) {
        sum+=a[i]*power(2,N-i);
//        cout<<a[i]*power(2,i)<<" "<< sum<<endl;
    }
    cout<<"EL NUMERO ES "<< sum <<endl;
    return  sum;

}
int main()
{

    srand(time(nullptr));
    int *binary = new int[N+1];
    Fill_binary(binary);
    printArr(binary);
    cout<<"El valor convertido es : "<< Binary2Dec(binary)<<endl;
}