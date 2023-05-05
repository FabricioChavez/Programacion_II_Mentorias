#include <iostream>
#include <iomanip>
using namespace std;


void printearM(string * M , int n, int m)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<setw(3)<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
void fillM(string * &M, int n, int m)
{

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            M[i][j]=char('A'+rand()%26);
        }
    }

}
void find_pos(string * cad , int n ,string target )
{
    pair<int , int> ans;
    bool finded= false  ;
    for (int i = 0; i < n; ++i) {
        if( cad[i].find(target)!=-1)
        {
            ans.first=i;
            ans.second=cad[i].find(target);
            finded= true;
            break;
        }

    }
    if(finded)
    {
        cout<<"LA RESPUESTA ES "<<endl;
        cout<<"INICIO :"<<"("<<ans.first<<","<<ans.second<<")"<<endl;
        cout<<"FIN :"<<"("<<ans.first<<","<<ans.second+target.size()-1<<")"<<endl;
    }else cout<<"NO SE ENCONTRO ...";

}


void transpose(string * origen , string * &nueva , int f , int c)
{
    nueva = new string [c];

    for (int i = 0; i < c; ++i) {
        nueva[i].resize(f);
    }
    for (int i = 0; i <c ; ++i) {
        for (int j = 0; j <f ; ++j) {
            nueva[i][j]=origen[j][i];
        }

    }

}

int main(){
    int f , c ;
    string s;
    srand(time(nullptr));
    cout<<"ingresa filas :";
    cin>>f;
    cout<<"Ingresa columnas :";
    cin>>c;

    string * soup = new string [f];
    string * Tsoup;
    for (int i = 0; i < f; ++i) {
        soup[i].resize(c);
    }
    fillM(soup,f, c);

    printearM(soup,f,c);
    cout<<endl;
    transpose(soup ,Tsoup , f ,c);
    printearM(Tsoup,c, f);
        cout<<endl;
    cout<<"INGRESA LO QUE BUSCAS :";
    cin>>s;
    find_pos(Tsoup,c ,s);







    return 0;
}

