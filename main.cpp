#include <cstdlib>
#include <iostream>

using namespace std;

//MULTIPLICACION POR SUMAS

int mult(int n1, int n2)
{
    int sum=0;
    for(int i=1; i<=n2; i++)
    {
        sum+=n1;   
    }
    return sum;
}

//POTENCIA USANDO EJERCICIO ANTERIOR

int pot(int n1, int n2)
{
    int sum=1;
    for(int i=1; i<=n2; i++)
    {
        sum=mult(sum,n1);
    }
    return sum;
}

//SOLUCION DE POLINOMIO

int poli(int x, int *p, int n)
{
    int sum=0;
    for(int i=0; i<=n; i++)
    {
        sum=sum+((*(p+i))*(pot(x,n-i)));
    }
    return sum;
}

//FACTORIAL

int fact(int n)
{
    int sum=1;
    for(int i=1; i<n; i++)
    {
        sum=sum+mult(sum,i);
    }
    return sum;
}

//DIVISION CON RESTAS

int divi(int n1, int n2)
{
    int sum=n1, cont=-1;
    while(sum>=0)
    {
        sum-=n2;
        cont++;
    }
    return cont;
}

int main()
{
    int vect[4]={5,4,3,2}, *p;
    p=&vect[0];
    cout<<mult(2,6)<<endl;
    cout<<pot(2,8)<<endl;
    cout<<poli(2,p,3)<<endl;
    cout<<fact(3)<<endl;
    cout<<divi(3,3)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
