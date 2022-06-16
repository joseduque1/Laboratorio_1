#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int num1 = 1;
    int num2 = 1;
    int num3 = 0;
    int acum = 0;

    cout<< "Ingrese un numero entero: ";
    cin >> num;


    while(num3 < num){

        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;

        if(num3 % 2 == 0){
            acum += num3;
        }
    }

    cout<< "El resultado de la suma = "<< acum<<endl;

}
