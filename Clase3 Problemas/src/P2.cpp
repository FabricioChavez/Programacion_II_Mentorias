#include <iostream>
#include <cmath>
using namespace std;
void actualizarC(int* a){
    cout<<"actualizar c";
    cin>>*a;
}
void actualizarD(int* a){
    cout<<"actualizar d";
    cin>>*a;
}
void actualizarW(int* a){
    cout<<"actualizar w";
    cin>>*a;
}
void actualizarL(int* a){
    cout<<"actualizar l";
    cin>>*a;
}
void menu(int * D ,int  *C ,int  *W ,int * L)
{
    int opt;
    cout<<"SELECCIONA QUE ACTUALIZAR :(1-4)";
    cin>>opt;
    switch (opt) {
        case 1:
            actualizarC(C);
            break;
        case 2:
            actualizarD(D);
            break;
        case 3:
            actualizarW(W);
            break;
        case 4:
            actualizarL(L);
            break;
        default:
            break;
    }
}
void imprimirFirst(int * D ,int  *C ,int  *W ,int * L)
{
    cout<< max(max(*D , *C),max(*W ,*L));
}


int main()
{
      int PtosDoctor, PtosCapitan, ptosWankanda , ptosLoki ;
      PtosCapitan=0;
      PtosCapitan=0;
      ptosWankanda=0;
      ptosLoki=0;
char c;
    do {
        menu(&PtosDoctor,&PtosCapitan,&ptosWankanda,&ptosLoki);
        cout<<"continuar? (s/n)"<<endl;
        cin>>c;
    } while (c!='n');

    imprimirFirst(&PtosDoctor,&PtosCapitan,&ptosWankanda,&ptosLoki);
    return 0;
}

