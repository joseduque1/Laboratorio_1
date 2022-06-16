#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int acum = 0;
    int num2 ;
    cout << "Ingrese un numero impar: ";
    cin >> num;
    num2 = num;
    for(int j = 0; j<=(num/2); j++){
            for(int i = 0; i<(num2/2); i++){
                cout << ' ';
            }
            for(int i = 0; i <= acum; i++){
                 cout << '*';
                }


            for(int i = 0; i<(num2/2); i++){
                 cout << ' ';
           }
            num2 -= 2;
            acum += 2;
            cout<<endl;
        }
     while(num>1){
            for(int i = 0; i<=(num2 +1); i++){
                cout << ' ';
            }
            for(int i = 0; i <(num-2); i++){
                 cout << '*';
                }


            for(int i = 0; i<=(num2+1); i++){
                 cout << ' ';
           }
            num -= 2;
            num2 += 1;
            cout<<endl;
    }

    return 0;
}
