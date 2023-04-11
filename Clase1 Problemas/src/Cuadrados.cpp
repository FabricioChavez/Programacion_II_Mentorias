#include <iostream>
using namespace std;
int main() {
    cout<<"Ingrese el numero de terminos : ";
    int n;
    cin>>n;
    int var=2;
    for (int i = 1; i <= n; ++i) {
        if(i%3==0)
        {
            cout<<var*var<<endl;
            var+=3;
        }
        else cout<<1<<endl;
    }

    return 0;
}