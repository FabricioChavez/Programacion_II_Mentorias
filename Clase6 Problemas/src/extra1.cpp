#include <iostream>
#include <vector>
using namespace std;
void fill_v(vector<int> &  vec , int n)
{
    for (int i = 0; i <n ; ++i) {
        vec.push_back(rand()%10+1);
    }
}
void print_v(vector<int> vec)
{
    for(auto val:vec)
        cout<<val<<" ";
    cout<<endl;
}
int main()
{
    int n1 , n2 , pos ;
    cin>>n1 >> n2>>pos;
    srand(time(nullptr));
    vector< int>a;
    vector<int>b;
    fill_v(a,n1);
    fill_v(b,n2);
    cout<<"A    ";
    print_v(a);
    cout<<"B    ";
    print_v(b);
    vector<int> dera;
    vector<int>derb;
    vector<int>  izqa;
    vector<int> izqb;
    dera.insert(dera.end(), a.begin()+pos,a.end());//finales
    derb.insert(derb.end(), b.begin()+pos,b.end());
    izqa.insert(izqa.end() , a.begin() , a.begin()+pos); //inciales
    izqb.insert(izqb.end() , b.begin() , b.begin()+pos);

    cout<<"TEMPORAL   ";
    a.clear();
    b.clear();
    izqa.insert(izqa.end() , derb.begin() , derb.end());
    a = izqa;
    izqb.insert(izqb.end() , dera.begin() , dera.end());
    b = izqb;

    cout<<"A nuevo  ";
    print_v(a);
    cout<<"B nuevo  ";
    print_v(b);

    return 0;
}