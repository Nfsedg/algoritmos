// gnome algorithm sort implementation

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
  int aux = a;
  a = b;
  b = aux;
}

void gnomeSort(vector<int> &array)
{
  int i = 0;
  while (i < array.size())
  {
    if (i == 0)
    {
      i++;
    }
    if (array[i] >= array[i - 1])
    {
      i++;
    }
    else
    {
      swap(array[i], array[i - 1]);
      i--;
    }
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
  gnomeSort(array);
  cout << "Arreglo ordenado: ";
  imprimirArreglo(array);
  return 0;
}