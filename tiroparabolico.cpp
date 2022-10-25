// function to calculate maximum height and range of a projectile

#include <iostream>
#include <cmath>
using namespace std;

float max_height(float v, float theta)
{
  float g = 9.81;
  float h = (v * v * sin(theta) * sin(theta)) / (2 * g);
  return h;
}

float range(float v, float theta)
{
  float g = 9.81;
  float r = (v * v * sin(2 * theta)) / g;
  return r;
}

int main()
{
  float v, theta;
  cout << "Enter the initial velocity (m/s): ";
  cin >> v;
  cout << "Enter the angle of projection (degrees): ";
  cin >> theta;
  theta = theta * 3.1416 / 180;
  cout << "Maximum height: " << max_height(v, theta) << " m" << endl;
  cout << "Range: " << range(v, theta) << " m" << endl;
  return 0;
}