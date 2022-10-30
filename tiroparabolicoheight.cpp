#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

float distancia(int velocidad, int angulo)
{
  float gravedad = 9.81;
  float angulog = (angulo * 3.1416) / 180;
  float distancia = (velocidad * velocidad) * (sin(angulog * 2)) / gravedad;
  return distancia;
}

float time(float distancia, int angulo, int velocidad)
{
  float tiempo = distancia / (velocidad * cos(angulo));

  return tiempo;
}

float height(float tiempo, int velocidadI, int angulo)
{
  float altura = (velocidadI * sin(angulo)) * tiempo - (9.81 * tiempo * tiempo) / 2;

  return altura;
}

int main()
{
  int blancoX = 100 + rand() % (2000);
  int blancoY = 100 + rand() % (2000);
  int velocidadI, angulo;
  int tiempo;
  int distanciaDelTiro;
  int alturaDelTiro;

  cout << "Derriba el objetivo\n";

  cout << "Dame la velocidad en m/s\n";
  cin >> velocidadI;

  cout << "Dame el angulo de disparo\n";
  cin >> angulo;

  distanciaDelTiro = distancia(velocidadI, angulo);
  tiempo = time(blancoX, angulo, velocidadI);

  return 0;
}