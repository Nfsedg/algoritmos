#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int numAleatorio = rand() % 1000;
  int numDelUsuario = 0;

  cout << "Adivina un número del 1 al 999 \n";
  cin >> numDelUsuario;

  if (numDelUsuario > 0)
  {
    while (numDelUsuario != numAleatorio)
    {
      if (numDelUsuario < numAleatorio)
      {
        cout << "Tu número ingresado es menor \n";
      }
      else if (numDelUsuario > numAleatorio)
      {
        cout << "Tu número ingresado es mayor \n";
      }
    }
    if (numDelUsuario == numAleatorio)
    {
      cout << "Felicidades, has encontrado el número aleatorio " << numAleatorio << "\n";
    }
  }

  return 0;
}