#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int Stairs(int n)
{
    if(n==2)
        return 2;
    else if(n==1)
        return 1;
    else return Stairs(n-1)+ Stairs(n-2);// recursive call
}

int main()
{
    int n;
    cin>>n;
    cout<<Stairs(n);

    return 0;
}