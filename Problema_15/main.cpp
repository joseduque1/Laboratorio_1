#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int i = 1;
    int acum = 0;
    int sum = 2;
    int cuad =0;
    cout<<"Ingrese un numero impar: ";
    cin>> num;

    acum+=i;
    i+=sum;
    cuad +=1;


    while(i<=num*num){
        if(cuad == 4){
            sum+=2;
            cuad=0;
        }
        acum += i;
        i+=sum;
        cuad +=1;
    }

cout<<"En una espiral de "<<num<<"x"<<num<<", la suma es "<<acum<<endl;



    return 0;
}
