#include <iostream>
using namespace std;

// y=mx+b

float m(float x1, float y1, float x2, float y2)
{
  float m = (y2 - y1) / (x2 - x1);

  return m;
}

float b(float m, float x1, float y1)
{
  float b = y1 - (m * x1);

  return b;
}

int main()
{
  float x1;
  float y1;
  float x2;
  float y2;
  float m1, b1;
  float m2, b2;
  float in1, in2;
  cout << "Dame la primera coordenada (x1, y1)" << endl;
  cin >> x1;
  cin >> y1;
  cout << "Dame la segunda coordenada (x2, y2)" << endl;
  cin >> x2;
  cin >> y2;
  m1 = m(x1, y1, x2, y2);
  b1 = b(m1, x1, y1);
  cout << "Tu ecuacion de la recta es y = " << m1 << "x + " << b1 << endl;
  cout << "Calcula la segunda ecuacion" << endl;
  cout << "Ingrsa tu primera coordenada (x1, y1)" << endl;
  cin >> x1;
  cin >> y1;
  cout << "Dame tu segunda coordenada (x2, y2)" << endl;
  cin >> x2;
  cin >> y2;
  m2 = m(x1, y1, x2, y2);
  b2 = b(m1, x1, y1);
  cout << "Tu segunda ecuacion de la recta es y = " << m2 << "x + " << b2 << endl;
  cout << "Calculemos su interseccion" << endl;
  if (m1 == m2)
  {
    cout << "No hay interseccion" << endl;
  }
  else
  {
    in1 = (b2 + -(b1)) / (m1 + -(m2));
    in2 = (m1 * in1) + b1;
    cout << "Si intersectan "
         << " Coordenada x " << in1 << " Coordenada y " << in2 << endl;
  }

  return 0;
}
