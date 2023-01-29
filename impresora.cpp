/* realizar un programa que simule la impresion
de documentos cada documento tendra un tama�o
aleatorio de datos que tardara por cada dato un ciclo
se ingresa el documento a imprimirir
oprimiendo la tecla D y para salir del progrma oprimir
la Tecla S*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y)
{
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}
void ponpatallainicial()
{
  int renglon;
  gotoxy(5, 1);
  cout << "no imprimiendo";
  gotoxy(20, 1);
  cout << "impresiones en cola";
  for (renglon = 2; renglon < 13; renglon++)
  {
    gotoxy(20, renglon);
    cout << "!";
    gotoxy(40, renglon);
    cout << "!";
  }
}
int numeroAleatorio()
{
  return srand((time(NULL)) % 5000 + 1);
}

void imprimir(int numeroAleatorio)
{
  for (int i = 0; i < numeroAleatorio; i++)
  {
    cout << "Imprimiendo" << numeroAleatorio << endl;
  }
}
int main()
{
  char c = ' ';
  ponpatallainicial();
  do
  {
    imprimir(numeroAleatorio());
    if (kbhit())
    {
      c = getch();
    }
    if (c == 'D')
    {
      // hacer un pus aleatorio;
    }
    // verificar si hay datos en la coal y hacer un pop y empezar el conteo
    //  hasta el numero alerooio que se saco del pop
  } while (c != 'S');
  system("pause");
  return 0;
}