#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n = 6;
  int r = 1;
  cin >> n;
  for (int it = 1; it <= n; it++)
  {
    r = it * r;
  }
  cout << "El factorial de " << n << " es " << r << "n\n";
  return 0;
}