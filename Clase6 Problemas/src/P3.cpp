#include <iostream>
#include <vector>
using namespace std;

void fill_v(vector<int> &origen , int n){
    for (int i = 0; i < n; ++i) {
        origen.push_back(rand()%19+1);
    }

}

vector<int> find_moda(vector<int> vec)
{
    int moda = vec[0];


    for (int i = 0; i < vec.size(); ++i) {

        if(moda<=vec[i] )
        {
            moda=vec[i];

        }
    }
    vector<int> index;
    for (int i = 0; i < vec.size(); ++i) {

        if(vec[i]==moda)
            index.push_back(i);
    }

    return index;
}
int main()
{

    srand(time(nullptr));
    int n;
    cin>>n;
    vector<int > numbers;
    fill_v(numbers,n);
    int max=numbers[0];


    for(auto v:numbers)
    {
            cout<<v<<" ";
            if(max<v)
                max=v;

    }
    cout<<endl;

    vector<int> repeticiones(max+1 ,0);

    for(auto v:numbers)
    {   cout<<"AUMENTANDO PARA "<<v<<endl;
        repeticiones[v]++;

    }
    for(auto v:repeticiones)
    {
       cout<<v<<" ";

    }


    cout<<"LA MODA ES :"<<endl;
    for(auto v: find_moda(repeticiones))
        cout<<v<<" ";







    return 0;
}