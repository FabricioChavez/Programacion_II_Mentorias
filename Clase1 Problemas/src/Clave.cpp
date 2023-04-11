#include <iostream>
#include "random"
using namespace std;
string clave()
{ string s="";
    //int cont=0;
    //cont+=10; <---> cont = cont +10;
    for (int i = 0; i < 8; ++i)
        s+=to_string(rand()%2); // rand()%2 0 o 1
    return s;
}
string decoder(const string& s)
{string vowels="uoiea";
    string letter="zyxwvutsrqponmlkjihgfedcba";
    string decoded;
    int cero=0;
    int uno=0;
    for(auto v:s) {

        if (v == '1')
        {
            decoded.push_back(vowels[(cero++)%(vowels.size())]);
        }
        if (v == '0')
        {
            decoded.push_back(letter[(uno++)%(letter.size())]);
        }
    }

    return decoded;



}
int main() {
    srand(time(nullptr));
string s1=clave();
string guess="";
int cont=0;
    while (s1!=guess)
    {
        guess=clave();

        cont++;

    }
cout<<"Clave encontrada despues de "<<cont<<" intentos :"<<s1<<endl;
    cout<<"Clave encontrada :" << decoder(guess);
}