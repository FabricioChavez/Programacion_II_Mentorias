#include <iostream>
using namespace std;
int main() {
    int n;
    do{
        cout<<"Ingrese el numero de caracteres para la base :";
        cin >> n;

    } while (!(n < 10 and n>1) );
    int crescendo=1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < crescendo; ++j) {
            if(i>=j)
            {
                if(j%2==0)
                    cout<<"+";
                else cout<<"*";
            }
        }
        cout<<endl;
        crescendo++;
    }

    return 0;
}