#include <iostream>

using namespace std;

int main()
{
   int num = 0 ;
   int acum = 0;
   int suma = 0;
   cout << "Ingrese un numero entero: ";
   cin >> num;



  for( int i = 2; i<=num; i++){
      acum = 0;

      for(int j = 1; j<=i;j++){

          if(i%j==0){

              acum+=1;
          }

       }
      if(acum == 2){
          suma += i;

      }
    }
  cout<<"La suma de los numeros primos menores a "<<num<<" es "<<suma<<endl;
    return 0;
}
