#include <iostream>

using namespace std;

int getSerieByNumber(int n)
{
  int count = 0;
  for (int i = 0; i <= n; i++)
  {
    if (i % 2)
    {
      count = ((n * 2) / n) + count;
    }
    else
    {
      count = ((n * 2) / n) - count;
    }
  }

  return count;
}

int main()
{
  int inputNumber = 5;

  cout << "Ingresa el número de la posición de la serie";
  cin >> inputNumber;
  cout << "El numero en la posición " << inputNumber << " es " << getSerieByNumber(inputNumber);
}