#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n = 10;
  int a = 0;
  int b = 1;
  int c;
  // cin >> n;
  if (n == 0)
  {
    cout << "La posición fibonacci en " << n << "es " << a;
  }
  else if (n == 1)
  {
    cout << "La posición fibonacci en " << n << "es " << b;
  }

  for (int it = 2; it < n; it++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  cout << "La posición fibonacci en " << n << " es " << c;
  return 0;
}