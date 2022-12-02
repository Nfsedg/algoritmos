/* PROGRAMA QUE LEE DOS MATRICES DADAS POR EL USUARIO Y DESPUES LAS SUMA DESPLEGANDO CADA MATRIZ Y EL RESULTADO
LOS PRIMEROS 2 DATOS DE LOS ARCHIVOS SON CANTIDAD DE RENGLONES Y COLUMNAS*/
#include <iostream>
#include <fstream>
using namespace std;
#define NUMCOL 100
#define NUMREN 100
struct tamanomatriz
{
  int cantren, cantcol;
};
bool leermatriz(int matriz[][NUMCOL], tamanomatriz *elem)
{
  char nombrearchivo[50];
  int renglon, columna;
  ifstream leer;
  cout << "Dame el nombre del archivo de la matriz\n";
  cin >> nombrearchivo;
  leer.open(nombrearchivo);
  if (leer.is_open())
  {
    leer >> (*elem).cantren;
    leer >> elem->cantcol;
    for (renglon = 0; renglon < elem->cantren; renglon++)
      for (columna = 0; columna < elem->cantcol; columna++)
        if (!leer.eof())
          leer >> matriz[renglon][columna];
        else
        {
          cout << "Faltaron datos\n";
          return false;
        }
    return true;
  }
  else
  {
    cout << "no se pudo abrir el archivo\n";
    return false;
  }
}
bool sumamatriz(int matrizA[][NUMCOL], int matrizB[][NUMCOL], int matrizR[][NUMCOL], tamanomatriz elemA, tamanomatriz elemB)
{
  int renglon, columna;
  if (elemA.cantren != elemB.cantren || elemA.cantcol != elemB.cantcol)
  {
    cout << "Esta suma no se puede realizar\n";
    return false;
  }
  for (renglon = 0; renglon < elemA.cantren; renglon++)
    for (columna = 0; columna < elemA.cantcol; columna++)
      matrizR[renglon][columna] = matrizA[renglon][columna] + matrizB[renglon][columna];
  return true;
}
bool multiplicarMatriz(int matrizA[][NUMCOL], int matrizB[][NUMCOL], int matrizR[][NUMCOL], tamanomatriz elemA, tamanomatriz elemB)
{
  int renglon, columna, indiceSuma;

  if (elemA.cantren != elemB.cantcol)
  {
    cout << "Esta multiplicacion no se puede realizar\n";
    return false;
  }

  for (renglon = 0; renglon < elemA.cantren; renglon++)
    for (columna = 0; columna < elemB.cantcol; columna++)
    {
      matrizR[renglon][columna] = 0;
      for (indiceSuma = 0; indiceSuma < elemA.cantcol; indiceSuma++)
        matrizR[renglon][columna] += matrizA[renglon][indiceSuma] * matrizB[indiceSuma][columna];
    }
  return true;
}

void imprimirMatriz(int matriz[][NUMCOL], tamanomatriz elem)
{
  int renglon, columna;
  for (renglon = 0; renglon < elem.cantren; renglon++)
  {
    for (columna = 0; columna < elem.cantcol; columna++)
      cout << matriz[renglon][columna] << " ";
    cout << endl;
  }
}

int main()
{
  int matrizA[NUMREN][NUMCOL], matrizB[NUMREN][NUMCOL], matrizR[NUMREN][NUMCOL];
  tamanomatriz elemA, elemB;
  if (!leermatriz(matrizA, &elemA))
  {
    system("pause");
    return 0;
  }
  if (!leermatriz(matrizB, &elemB))
  {
    system("pause");
    return 0;
  }
  if (!multiplicarMatriz(matrizA, matrizB, matrizR, elemA, elemB))
  {
    system("pause");
    return 0;
  }
  cout << "La matriz a es\n";
  imprimirMatriz(matrizA, elemA);
  cout << "La matriz b es\n";
  imprimirMatriz(matrizB, elemB);
  cout << "La matriz multiplicada es\n";
  imprimirMatriz(matrizR, elemA);
  system("pause");
  return 0;
}