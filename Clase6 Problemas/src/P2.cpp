#include <iostream>
#include <vector>
using namespace std;



int main()
{

    string s;
    int n;
    vector<char> values;
    vector<char> valuesL;
    vector<char> valuesR;
    cout<<"TEXTO"<<endl;
    cin>>s;
    cout<<s<<endl;
    for (int i = 0; i < s.size(); ++i) {
        values.push_back(s[i]);
    }
    cout<<"INGRESA NUMERO A ROTAR";
    cin>>n;

    if(n>0)
    {
        for (int i = 0; i < s.size()-n; ++i) {
            valuesL.push_back(values[i]);
        }
        for (int i = s.size()-n; i <s.size() ; ++i) {
            valuesR.push_back(values[i]);
        }
        valuesR.insert(valuesR.end() , valuesL.begin() , valuesL.end());
        for(auto v:valuesR)
            cout<<v;

    }else if(n<0)
    {   n=abs(n);
       // cout<<n<<endl;
            for (int i = 0; i <n; ++i) {

                valuesL.push_back(values[i]);
            }
            for (int i = n; i <s.size(); ++i) {

                valuesR.push_back(values[i]);
            }

            valuesR.insert(valuesR.end() , valuesL.begin() , valuesL.end());

        for(auto v:valuesR)
            cout<<v;

    }








    return 0;
}