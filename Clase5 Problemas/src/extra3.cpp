#include <iostream>
#include <vector>
#include <iomanip>
using  namespace std;

void evenYear( int mes , int dia  , string & name ){


    if(dia%2==0)
    {
        switch (mes) {

            case 1:
                name = "Miguel";
                break;
            case 2:
                name = "Miguel";
                break;
            case 3:
                name = "Miguel";
                break;
            case 4:
                name = "Jofiel";
                break;
            case 5:
                name = "Jofiel";
                break;
            case 6:
                name = "Jofiel";
                break;
            case 7:
                name = "Chamuel";
                break;
            case 8:
                name = "Chamuel";
                break;
            case 9:
                name = "Chamuel";
                break;
            case 10:
                name = "Ariel";
                break;
            case 11:
                name = "Ariel";
                break;
            case 12:
                name = "Ariel";
                break;
        }

    }else{
        switch (mes) {

            case 1:
                name = "Gabriel";
                break;
            case 2:
                name = "Gabriel";
                break;
            case 3:
                name = "Gabriel";
                break;
            case 4:
                name = "Raziel ";
                break;
            case 5:
                name = "Raziel ";
                break;
            case 6:
                name = "Raziel ";
                break;
            case 7:
                name = "Selatiel ";
                break;
            case 8:
                name = "Selatiel ";
                break;
            case 9:
                name = "Selatiel ";
                break;
            case 10:
                name = "Jeremiel";
                break;
            case 11:
                name = "Jeremiel";
                break;
            case 12:
                name = "Jeremiel";
                break;
        }

    }
}

void oddYear(int mes , int dia , string & name){

    if(dia%2==0)
    {
        switch (mes) {

            case 1:
                name = "Rafael";
                break;
            case 2:
                name = "Rafael";
                break;
            case 3:
                name = "Rafael";
                break;
            case 4:
                name = "Barachiel";
                break;
            case 5:
                name = "Barachiel";
                break;
            case 6:
                name = "Barachiel";
                break;
            case 7:
                name = "Zadquiel";
                break;
            case 8:
                name = "Zadquiel";
                break;
            case 9:
                name = "Zadquiel";
                break;
            case 10:
                name = "Anael";
                break;
            case 11:
                name = "Anael";
                break;
            case 12:
                name = "Anael";
                break;
        }

    }else{
        switch (mes) {

            case 1:
                name = "Uriel";
                break;
            case 2:
                name = "Uriel";
                break;
            case 3:
                name = "Uriel";
                break;
            case 4:
                name = "Jehudiel";
                break;
            case 5:
                name = "Jehudiel";
                break;
            case 6:
                name = "Jehudiel";
                break;
            case 7:
                name = "Metatron";
                break;
            case 8:
                name = "Metatron";
                break;
            case 9:
                name = "Metatron";
                break;
            case 10:
                name = "Arzael";
                break;
            case 11:
                name = "Arzael";
                break;
            case 12:
                name = "Arzael";
                break;
        }

    }
}

void GeneralSelector(){
    int dia , mes , year ;
    string name;
    cin>>dia>>mes>>year;

    if(year%2==0)
        evenYear(mes , dia , name);
    else oddYear(mes , dia , name);

    cout<<"El nombre es "<<name<<endl;



}

int main()
{

GeneralSelector();


}