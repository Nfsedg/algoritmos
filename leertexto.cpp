/* programa que contara cuantas veces existe un texto dado en un archivo dado*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream leer;
  char anyCharacter = '?';
  char spaceCharacter = '_';
  char textbuscar[30], nombrearchivo[30], letra;
  int indice, cuentatexto = 0;
  bool si_lee = true;
  cout << "dame el nombre del archivo en el que quieres contar el texto\n";
  cin >> nombrearchivo;
  leer.open(nombrearchivo);
  if (leer.is_open())
  {
    cout << "dame el texto a contar\n";
    cin >> textbuscar;
    while (!leer.eof())
    {
      if (si_lee)
        letra = leer.get();
      else
        si_lee = true;
      indice = 0;
      while ((int(textbuscar[indice]) == 63 && int(letra) != 32) || (int(textbuscar[indice]) == 32 && int(letra) != 63) || textbuscar[indice] == letra && textbuscar[indice] != '\0' && !leer.eof())
      {
        indice++;
        letra = leer.get();
        si_lee = false;
      }
      if (textbuscar[indice] == '\0')
      {
        cuentatexto++;
      }
    }
    leer.close();
    cout << "la cantidad de repeticiones fueron " << cuentatexto << endl;
  }
  else
    cout << "No se pudo abrir el archivo\n";
  system("pause");
  return 0;
}
