#include <bits/stdc++.h>
using namespace std;
int word_count(string s)
{
    int cont=0;
    bool space= true;
    s+=" ";
    for(auto c:s)
    {
        if(c==' ')
        {
            if(space)
            {
                cont++;
                space= false;
            }
        }

        if(c!=' ')
            space= true;

    }

    return cont;

}
void word_extraction(string s , string * cads)
{
    int cont=0;
    bool space= true;
    s+=" ";
    for(auto c:s)
    {
        if(c!=' ')
        {
            cads[cont].push_back(c);
        }


        if(c==' ')
        {
            if(space)
            {
                cont++;
                space= false;
            }
        }

        if(c!=' ')
            space= true;

    }



}
int main() {

    string s="Esta es   una string  de  prueba para la mentoria >w<";
    int n=word_count(s);
    string *cadenas = new string [n];
    word_extraction(s,cadenas);
    for (int i = 0; i < n; ++i) {
        cout<<cadenas[i]<<endl;
    }



}
