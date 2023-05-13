#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string a , b ;
    cout<<"INGRESE LA PALABRA 1 :";
    cin>>a;
    cout<<"INGRESE LA PALABRA 2 :";
    cin>>b;

    vector<char> alfa;
    vector<char> beta;
    for (int i = 0; i <a.size() ; ++i) {
        alfa.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); ++i) {
        beta.push_back(b[i]);
    }
    for(auto v : alfa)
        cout<<v<<" , ";
    cout<<endl;
    for(auto v : beta)
        cout<<v<<" , ";
    cout<<endl;
    vector<int> pal_rep(27,0);
    vector<char> no_rep;

    for(auto c:alfa)
        pal_rep[c-'a']++;
    for(auto c:alfa)
    {
        if(pal_rep[c-'a']==1)
            no_rep.push_back(c);
    }

    for(auto v:no_rep)
        cout<<v<<" ";

    return 0;
}