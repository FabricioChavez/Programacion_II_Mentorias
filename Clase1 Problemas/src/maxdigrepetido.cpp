#include <iostream>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int n;
 cin>>n;
 int max=INT_MIN;
 int cont=0;
 for(auto c:s)
 {
     if(n==(c-'0'))
         cont++;
     else {

         if(max<cont)
             max=cont;
         cont=0;
     }
 }
 cout<<max;
}