#include <iostream>
using namespace std;
string clave()
{ string s="";
    //int cont=0;
    //cont+=10; <---> cont = cont +10;
    for (int i = 0; i < 8; ++i)
        s+=to_string(rand()%2); // rand()%2 0 o 1
    return s;
}
int main()
{
    srand(time(nullptr));
    string inicial=clave();
    string adivinar="";
    int cont=0;
    cout<<inicial<<" <--- clave init"<<endl;
    while (inicial!=adivinar)
    {
        adivinar=clave();
        cout<<adivinar<<endl;

        cont++;
    }
    cout<<cont;


}