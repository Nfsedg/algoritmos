#include <iostream>
#include <math.h>

using namespace std;

float calcParabola(float velI, int ang)
{
  float g = 9.81;
  float veli2 = velI * velI;
  float angRad = (ang * 3.1416) / 180;
  float seno = sin(2 * angRad);

  return (veli2 * seno) / g;
}

int main()
{
  int ang = 45;
  int vel = 100;
  cout << "INGRESA EL VALOR DEL ANGULO";
  cin >> ang;
  cout << "INGRESA LA VELOCIDAD";
  cin >> vel;
  if (ang > 0 && ang < 90 && vel > 0)
  {
    cout << calcParabola(vel, ang) << endl;
  }
  return 0;
}