#include <iostream.h>
#include <stdlib.h>
#include <math.h>

void main()
{
  int Ax, Ay, Bx, By;
  float Dx, Dy, Dist, Grad;

  cout << "Please enter the 'x' coordinate of the first point: " << endl;
  cin >> Ax;
  cout << "Please enter the 'y' coordinate of the first point: " << endl;
  cin >> Ay;
  cout << "Please enter the 'x' coordinate of the second point: " << endl;
  cin >> Bx;
  cout << "Please enter the 'y' coordinate of the second point: " << endl;
  cin >> By;

  Dx = Ax - Bx;
  Dy = Ay - By;
  Grad = Dy / Dx;

  cout << "Gradient = " << Grad << endl;
}