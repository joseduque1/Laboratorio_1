#include <iostream>

using namespace std;

int main()
{
    char letra;
    char vocal [26] = {'a','e','i','o','u','b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    cout << "Ingres una letra en minuscula: ";
    cin >> letra ;


    for(int i = 0;i < 26; i++){

         if(i<11){
             if(vocal[i] == letra){

                cout <<letra<<" es una vocal. ";
             }
         }
         else if(i<26){
             if(vocal[i] == letra){

                cout <<letra<<" es una consonante. ";
             }
         }
         else{
             cout <<letra<<" no es una letra. ";
         }


    }





    return 0;
}
