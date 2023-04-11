#include <iostream>
using namespace std;
int main() {
int n;
do{

    cin>>n;


} while (!(n<40 and n > 4));

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {
            if(i==0 or i == n-1)
            {
                cout<<"-";
            }else {     if(i==j)
                    cout<<"\\";
                else if(i+j==n-1)
                    cout<<"/";
                else cout<<" ";}



        }
        cout<<endl;

    }

    return 0;
}