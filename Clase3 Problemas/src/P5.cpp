#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[]={1,32,6,5,5,6,6,46};
    int *ptr=arr;
    int size = sizeof(arr)/sizeof(int);
    int size2 = *(&arr +1)-arr;
    cout<<"Hallando size de arr en forma uno : "<<size<<endl;
    cout<<"Hallando size de arr en forma dos : "<<arr<<endl;
    cout<<"Hallando size de arr en forma dos --> : "<<ptr+8<<endl;
    cout<<"Hallando size de arr en forma dos : "<<(&arr)<<endl;
    cout<<"Hallando size de arr en forma dos : "<<(&arr)+1<<endl;
    cout<<"Hallando size de arr en forma dos : "<<*(&arr+1)<<endl;
    cout<<"Hallando size de arr en forma dos : "<<*(&arr+1)-arr<<endl;
    cout<<"Hallando size de arr en forma dos : "<<size2<<endl;

    return 0;
}

