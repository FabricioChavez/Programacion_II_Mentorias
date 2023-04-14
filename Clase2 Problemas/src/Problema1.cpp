#include <iostream>
using  namespace std;
string to_binario(int n)
{
        if(n<2)
            return to_string(n);
        else return to_binario(int(n/2))+ to_string(n%2);
}
void solve()
{

    int n;
    do{
        cout<<"Ingresa un numero (si ingresa cero el programa termina) ";
        cin>>n;
        if(n<0)
            cout<<"Ingresar solo numneros positivos"<<endl;
        else if(n>0) cout<<"El binario es "<<to_binario(n)<<endl;

    } while (n!=0);


}
int main(){
    solve();
    return 0;
}