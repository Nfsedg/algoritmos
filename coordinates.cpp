#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

float getM(int Ax, int Ay, int Bx, int By)
{
  return ((By - Ay) / (Bx - Bx));
}

float getB(float m, int x, int y)
{
  return (y - (m * x));
}
// y=mx+b

void main()
{
  int Ax, Ay, Bx, By;
  float Dx, Dy, Dist, Grad, M;

  cout << "Please enter the 'x' coordinate of the first point: " << endl;
  cin >> Ax;
  cout << "Please enter the 'y' coordinate of the first point: " << endl;
  cin >> Ay;
  cout << "Please enter the 'x' coordinate of the second point: " << endl;
  cin >> Bx;
  cout << "Please enter the 'y' coordinate of the second point: " << endl;
  cin >> By;

  float m1 = getM(Ax, Ay, Bx, By);
  float b1 = getB(m1, Ax, Ay);

  cout << "Gradient = " << Grad << endl;
}