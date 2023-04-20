#include <iostream>
#include <vector>

using namespace std;
int factorial(int n)
{
    if(n>0)
     return n*factorial(n-1);
    else return 1;
}

int r_max(vector<int > arr , int n)
{
    if(n>0)
        return max(arr[n], r_max(arr,n-1 )); // Llamada recursiva
    else return arr[0];//caso base

}


bool r_palindromo(string s, int ini , int fin)
{
    if(ini<fin)
    { cout<<s[ini]<<" "<<s[fin]<<endl;
        if(s[ini]!=s[fin])
            return false;
        else return r_palindromo(s, ini+1 , fin-1);
    } else if(ini==fin) return true;
}

int r_grid(int m , int n)
{
        if(m > 1 and n >1)
        {
            return r_grid(m-1,n)+ r_grid(m,n-1);
        }else return 1;
}

string to_binary(int n)
{

    if(n<2) return to_string(n);
    else return (to_string(n%2)+ to_binary(n/2));
}

int sombrero(double x)
{
   return ((x-int(x))!=0)?int(x)+1:int(x);
}

int piso(double x)
{
    return int(x);
}

int main()
{
}