#include <iostream>
#include <vector>
using namespace std;
struct punto{
    int x , y;
    void foo(){

    }

};
void haz_algo(vector<punto>& vec) // int *arr  int **arr
{
    vec.push_back({2,3});
    vec.push_back({1,1});
    vec.push_back({4,5});
    vec.push_back({6,6});
    vec.push_back({8,9});
    cout<<"FORMA INTERNA "<<endl;
    for(auto val:vec)
    {
        cout<< (val).x << " , " <<(val).y<<endl;
    }

}

int main()
{

//    vector<punto> vec;
//
//    cout<<"FORMA UNO SIMILAR A LOS ARRAY "<<endl;
//    for (int i = vec.size(); i >= 0; --i) {
//        cout<< vec[i].x <<" , "<< vec[i].y<<endl;
//    }
//    cout<<"FORMA DOS ITERADORES "<<endl;
//    for (auto i = vec.begin(); i != vec.end() ; ++i) {
//          cout<< (*i).x << " , " <<(*i).y<<endl;
//    }
//
//    haz_algo(vec);
//    cout<<"FORMA TRES PYTHON "<<endl;
//    for(auto val:vec)
//    {
//        cout<< (val).x << " , " <<(val).y<<endl;
//    }
//    cout<<"FORMA BONUS  "<<endl;
//    for_each(vec.begin() , vec.end() ,[](punto x){
//
//        cout<< (x).x << " , " <<(x).y<<endl;
//    });



//    srand(time(nullptr));
//  vector<int > vec;
//
//    haz_algo(vec); // pasa la referencia (DIRECCION) vector
//
//    for(auto it = vec.rbegin()  ; it != vec.rend() ;it++ )
//        cout<<*it<<endl; // NO ES DESREFERENCIAR PUNTERO
//    for (int i = 0; i < vec .size(); ++i) { //indices
//        cout<<vec[i]<<endl;
//    }
//    for (auto v:vec) {
//        cout<<v<<endl;
//    }
////    for_each(vec.begin() , vec.end() ,[](int x){
////
////        cout<<x<<endl;
////    });
//
//string s;
//cin>>s;
//vector<char> vec;
//vector<char> vec2{'1', '2', '3'};
//    for (int i = 0; i < s.size(); ++i) {
//        vec.push_back(s[i]);
//    }
//
//    vec.insert(vec.end(), vec2.begin() , vec2.end());
//
//
//for(auto c:vec)
//    cout<<c<<" ;";
//cout<<'z'-'a';


vector<int> alfa(5);
vector<int> beta(6,1);
for(auto a:alfa)
    cout<<a<<" ";
cout<<endl;
alfa.insert(alfa.begin()+3,beta.begin() , beta.end() );

for(auto a:alfa)
    cout<<a<<" ";
    cout<<endl;
    auto it = find(alfa.begin(), alfa.end(), 1);
    cout<<"El valor encontrado es "<<it-alfa.begin();
    return 0;
}