#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int intentos = 0 ;

  int numA1 = 1 + (rand() % 4);
  int numA2 = 1 + (rand() % 4);
  int numA3 = 1 + (rand() % 4);
  int numA4 = 1 + (rand() % 4);

  int userNum1 = 0;
  int userNum2 = 0;
  int userNum3 = 0;
  int userNum4 = 0;

  int numDelUsuario = 0;

  cout << "Ingresa el primer numero entre el 1 y 4 \n";
  cin >> userNum1;
  cout << "Ingresa el segundo numero entre el 1 y 4 \n";
  cin >> userNum2;
  cout << "Ingresa el terdero numero entre el 1 y 4 \n";
  cin >> userNum3;
  cout << "Ingresa el cuarto numero entre el 1 y 4 \n";
  cin >> userNum4;

  do
  {
    intentos++;
    if(userNum1){

    }
  } while (numA1 != userNum1 && numA2 != userNum2 && numA3 != userNum3 && numA4 != userNum4);

  cout << "Adivina un número del 1 al 999 \n";
  cin >> numDelUsuario;

  return 0;
}