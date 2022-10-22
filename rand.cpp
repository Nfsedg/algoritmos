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
    do
    {
      if (numDelUsuario < numAleatorio)
      {
        cout << "Tu número ingresado es menor \n";
        cin >> numDelUsuario;
      }
      else if (numDelUsuario > numAleatorio)
      {
        cout << "Tu número ingresado es mayor \n";
        cin >> numDelUsuario;
      }
    } while (numDelUsuario != numAleatorio);
    if (numDelUsuario == numAleatorio)
    {
      cout << "Felicidades, has encontrado el número aleatorio " << numAleatorio << "\n";
    }
  }
  else
  {
    cout << "El numero debe ser mayor a 0 \n";
  }

  return 0;
}