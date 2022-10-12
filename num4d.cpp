#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int nc;
void comparanumeroscorrectos(int *nummaq, int *numusu)
{
  if (*nummaq == *numusu)
  {
    nc++;
    *nummaq = -1;
    *numusu = -2;
  }
}
void sonNumerosCorrectosPosicionIncorrecta(int *vmt1, int *vus2, int *vus3, int *vus4)
{
  if (*vmt1 == *vus2 || *vmt1 == *vus3 || *vmt1 == *vus4)
  {
    nc++;
    if (*vmt1 == *vus2)
    {
      *vmt1 = -1;
      *vus2 = -2;
    }
    else if (*vmt1 == *vus3)
    {
      *vmt1 = -1;
      *vus3 = -2;
    }
    else
    {
      *vmt1 = -1;
      *vus4 = -2;
    }
  }
}
int main()
{
  int vm1, vm2, vm3, vm4, vus1, vus2, vus3, vus4, vusu;
  int vmt1, vmt2, vmt3, vmt4;
  int intentos, ncm;
  srand(time(NULL));
  vm1 = rand() % 4 + 1;
  vm2 = rand() % 4 + 1;
  vm3 = rand() % 4 + 1;
  vm4 = rand() % 4 + 1;
  intentos = 0;
  cout << vm1 << vm2 << vm3 << vm4 << endl;
  do
  {
    ncm = nc = 0;
    vmt1 = vm1;
    vmt2 = vm2;
    vmt3 = vm3;
    vmt4 = vm4;
    cout << "Dame 1 numeros de 4 digitos con numeros del 1 al 4" << endl;
    cin >> vusu; // 2312 /1000 = 2 2312 / 100 = 23%10 = 3   2312/10 231%10 = 1  2312%10
    vus4 = vusu % 10;
    vus3 = (vusu / 10) % 10;
    vus2 = (vusu / 100) % 10;
    vus1 = (vusu / 1000);
    // verifica numeros correctos en posicion correcta
    comparanumeroscorrectos(&vmt1, &vus1);
    comparanumeroscorrectos(&vmt2, &vus2);
    comparanumeroscorrectos(&vmt3, &vus3);
    comparanumeroscorrectos(&vmt4, &vus4);
    // verifica numeros correctos en posiciones incorrectas
    sonNumerosCorrectosPosicionIncorrecta(&vmt1, &vus2, &vus3, &vus4);
    sonNumerosCorrectosPosicionIncorrecta(&vmt2, &vus1, &vus3, &vus4);
    sonNumerosCorrectosPosicionIncorrecta(&vmt3, &vus1, &vus2, &vus4);
    sonNumerosCorrectosPosicionIncorrecta(&vmt4, &vus1, &vus2, &vus3);
    intentos++;
    if (nc != 4)
    {
      cout << "tienes " << nc << " numeros correctos en posicion correcta" << endl;
      cout << "tienes " << ncm << " numeros correctos en posicion incorrecta" << endl;
      cout << "tienes " << 4 - nc - ncm << " numeros incorrectos" << endl;
    }
  } while (nc != 4);
  cout << "lo lograste con " << intentos << " intentos" << endl;
  system("pause");
  return 0;
}