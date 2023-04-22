#include <iostream>
#include <cmath>
using namespace std;
void leedato(float & lado)
{
    cout<<"leer :";
    cin>>lado;
    cout<<endl;
}
bool validarExistencia(float a , float b , float c )
{
    return (a+b>c)  and (a+c>b) and (b+c>a);
}
void semiperimetro(float *a , float *b , float *c , float * semiperi)
{

        *semiperi= (float(*a+*b+*c)/float(2.0));
        cout<<"El semiperimetro es :"<< *semiperi<<endl;

}
float areaTriangulo(const float *a, const float *b, const float *c, float semiper)
{
    float area = sqrt(semiper * (semiper - *a) * (semiper - *b) * (semiper - *c));
    return area;
}

int main()
{
    float a, b, c;
    float semiper;

    leedato(a);
    leedato(b);
    leedato(c);



    if (validarExistencia(a, b, c))
    {
        semiperimetro(&a, &b, &c, &semiper);
        float area = areaTriangulo(&a, &b, &c, semiper);
        cout << "El area del triangulo es: " << area << endl;
    }
    else
    {
        cout << "El triangulo no existe" << endl;
    }

    return 0;
}

