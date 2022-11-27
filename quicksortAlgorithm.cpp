#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
  int aux = a;
  a = b;
  b = aux;
}

int particion(vector<int> &array, int inicio, int fin)
{
  int pivote = array[inicio];
  int i = inicio + 1;
  for (int j = i; j <= fin; j++)
  {
    if (array[j] < pivote)
    {
      swap(array[i], array[j]);
      i++;
    }
  }
  swap(array[inicio], array[i - 1]);
  return i - 1;
}

void quickSort(vector<int> &arreglo, int inicio, int fin)
{
  if (inicio < fin)
  {
    int pivote = particion(arreglo, inicio, fin);
    quickSort(arreglo, inicio, pivote - 1);
    quickSort(arreglo, pivote + 1, fin);
  }
}

void imprimirArreglo(vector<int> array)
{
  for (int i = 0; i < array.size(); i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> array;
  array.push_back(5);
  cout << "Ingresa cuantos numeros ordenaras: ";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int num;
    cout << "Ingresa el numero " << i + 1 << ": ";
    cin >> num;
    array.push_back(num);
  }
  cout << "Arreglo desordenado: ";
  imprimirArreglo(array);
  quickSort(array, 0, array.size() - 1);
  cout << "Arreglo ordenado: ";
  imprimirArreglo(array);
  return 0;
}