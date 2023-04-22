#include <iostream>
#include <cmath>
using namespace std;
//void print_arr(int arr[], int size)
//{
//    int *ptr = arr;
//    for (int i = 0; i < size; ++i,ptr++) {
//        cout<<*ptr<<" ";
//    }
//}
//void modifica(int * ptr)
//{   cout<<"Modifica :";
//    cin>>*ptr;
//}
void print_raro(char cad[] )
{
    if (cad[0]!='\0')
    {  print_raro(cad+1);
        cout<<cad[0]<<endl;
    }else cout<<cad[0];

}
int main()
{
//   /*int A;
//   A=7;
//   int *ptrA=&A;
//   cout<<A<<endl;
//   cout<<&A<<endl;
//   cout<<ptrA<<endl;
//   cout<<*ptrA<<endl;
//   *ptrA=5;
//   cout<<*ptrA<<endl;
//   cout<<&ptrA;*/
//   int arr[]={1,2,3,4};
//   /*cout<<arr<<endl;
//   cout<<*(arr+2)<<endl;
//   cout<<arr[2];*/
//   int size = sizeof(arr)/sizeof(int);
//    print_arr(arr,size);

//int Ptotoro=0;
//cout<<Ptotoro<<endl;
//    modifica(&Ptotoro);
//    cout<<Ptotoro<<endl;

    char cad[255];
    gets(cad);
    print_raro(cad);



    return 0;
}

