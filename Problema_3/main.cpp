#include <iostream>

using namespace std;

int main()
{
     int mes;
     int dia;
     int mes2[2][7] = {1, 3, 5, 7, 8, 10, 12, 4, 6, 9, 11};

     cout << "Ingresa el numero correspondiente a un mes: ";
     cin >> mes;
     cout << "Ingresa el dia del mes: ";
     cin >> dia;

     for(int j=0; j<7; j++){
           if(mes2[0][j]==mes){
               if(dia < 31){
                   cout<< mes<<"/"<<dia<< " es una fecha valida."<<endl;
               }
               else{
                   cout<< mes<<"/"<<dia<< " no es una fecha valida."<<endl;
               }
               break;
            }
            else if(mes2[1][j]==mes){
               if(dia < 30){
                   cout<< mes<<"/"<<dia<< " es una fecha valida."<<endl;
               }
               else{
                   cout<< mes<<"/"<<dia<< " no es una fecha valida."<<endl;
               }
               break;
            }
             else if(mes == 2){
                 if(dia < 28){
                     cout<< mes<<"/"<<dia<< " es una fecha valida."<<endl;
                 }
                 else if(dia == 29){
                     cout<< mes<<"/"<<dia<< " es una fecha posible en bisiesto."<<endl;
                 }
                 else{
                     cout<< mes<<"/"<<dia<< " no es una fecha valida."<<endl;

                 }
                 break;
           }
}
}
