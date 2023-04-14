
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;
bool recursive_palindrome(string cad , int ini , int fin)
{
    if(ini<fin)
    {  // cout<<cad[ini]<<" "<<cad[fin]<<endl;
        if(cad[ini]!=cad[fin])
            return false;
        else return recursive_palindrome(cad, ini + 1, fin - 1);
    } else if(ini==fin) return true;
}
int recursive_max(vector<int > numbers, int s)
{
   if(s>0)
   {
       return max(numbers[s], recursive_max(numbers,s-1));
   }else return numbers[0];

}

int recursive_grid(int n , int m)
{
        if(n > 1 and m >1) {

           // cout<<n<<"  "<<m<<endl;
            return recursive_grid(n - 1, m) + recursive_grid(n, m - 1);

        }else return 1;

}

int main()
{
string a="2211005001122";
cout<<boolalpha<<recursive_palindrome(a, 0 , a.size()-1);
cout<<endl;
vector<int> A{32,45,6,4,5,78,456,6};
cout<<recursive_max(A, A.size())<<endl;
int n,m;
cin>>n>>m;
cout<<"GRID :"<<recursive_grid(n,m);
    return 0;
}