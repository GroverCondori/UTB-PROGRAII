#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int>numero(n);
    int suma=0;
    cout<<"ingrese tamaño de vector= ";
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cout<<"ingrese valor de vector campo ";
        cout<<i << "=  ";
        cin>> numero[i];   
    }
    for(int x=0; x<n; x++)
    {
     suma = suma + numero[x];
    }
    cout<< "la suma es: " <<suma <<endl;
    getch();
    return 0;
}
