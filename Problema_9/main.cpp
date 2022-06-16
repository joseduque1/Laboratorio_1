#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int i = 0;
    int acum = 0;
    cout<<"Ingrese un numero: ";
    cin>>num;


    while(num>0){

        int ele = num%10;

        for(int j = 1; j<num%10;j++){
             ele *= num%10;

        }

        acum += ele;
        num = num/10;
        i++;

    }
    cout<< acum<<endl;




}
