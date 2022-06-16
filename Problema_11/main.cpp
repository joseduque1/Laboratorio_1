#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int num2=0;
    int a = 0;
    int b = 0;
    int pro = 0 ;
    int mcm = 0;
    int mcd = 0 ;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    num2 = num-1;
    a = num;
    b = num2;
    mcd = a%b;

    while(b>1){
        pro = a*b;
        while(mcd !=0){
            a = b;
            b = mcd;
            mcd =a%b;

        }
        mcm = pro/b;
        a = mcm;
        b = num2 - 1;
        mcd = a%b;
        num2 -=1;
        }
    cout << "El M.C.M de todos los numeros entre "<<num<<" y 1 es igual a "<<a<<endl;

}
