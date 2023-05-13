#include <iostream>
#include <vector>
using namespace std;

void fill_v(vector<int> &origen , int n){
    for (int i = 0; i < n; ++i) {
        origen.push_back(rand()%998+1);
    }

}

bool has_four(int n)
{

    while (n>0)
    {
        int dig=n%10;
        if(n==4)
            return true;
        n=n/10;


    }

    return false;

}

int main()
{
    int n;
    cin>>n;
    vector<int > numbers;
    fill_v(numbers,n);
    for(auto v:numbers)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    for(auto v:numbers)
    {
        if(has_four(v))
            cout<<v<<" ";
    }


    srand(time(nullptr));




    return 0;
}