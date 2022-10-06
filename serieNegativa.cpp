#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float n = 0;
  float a = 1, b = 2, c = 3;
  float d = 3, e = 4;
  float x = (a * (b / c));
  float y = d / e;
  float r;
  cin >> n;
  if (n == 1)
  {
    cout << "La posición en " << n << " es " << x;
    return 0;
  }

  for (int it = 1; it < n; it++)
  {
    if (it % 1 == 0)
    {
      r = x + y;
      a = a + 4;
      b = b + 4;
      c = c + 4;
      d = d + 3;
      e = e + 3;
      x = (a * (b / c));
      y = d / e;
    }
    else if (it % 2 == 0)
    {
      r = x - y;
      a = a + 4;
      b = b + 4;
      c = c + 4;
      d = d + 3;
      e = e + 3;
      x = (a * (b / c));
      y = d / e;
    }
  }
  cout << "La posición en " << n << " es " << r << "n\n";
  return 0;
}