#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int acum = 0;
    int i = 1;
    cout<<"Ingresa un numero: ";
    cin>> num;
    int arreglo[3000];

    arreglo[0] = 0;


     while(acum<=num){
         arreglo[i] = i + arreglo[i-1];
         acum = 0;


         for(int j = 1;j<=arreglo[i];j++){

             if(arreglo[i]%j == 0){
                   acum+=1;
               }
           }          
           i+=1;
       }
     cout<<"El numero es: "<<arreglo[i-1]<<" que tiene "<<acum<<" divisores."<<endl;
}
