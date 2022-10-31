#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

float distancia(int velocidad, int angulo)
{
  float gravedad = 9.81;
  float anguloRad = (angulo * 3.1416) / 180;
  float distancia = (velocidad * velocidad) * (sin(anguloRad * 2)) / gravedad;
  return distancia;
}

float time(int velocidad, int angulo)
{
  float anguloRad = (angulo * 3.1416) / 180;
  float tiempo = ((2 * velocidad) * (sin(anguloRad))) / 9.81;

  return tiempo;
}

float heightInTime(float tiempo, int velocidadI, int angulo)
{
  float anguloRad = (angulo * 3.1416) / 180;
  float altura = (velocidadI * sin(anguloRad) * tiempo) - (9.81 * (tiempo * tiempo)) / 2;

  return altura;
}

float distanceInTime(float tiempo, int velocidadI, int angulo)
{
  float anguloRad = (angulo * 3.1416) / 180;
  float altura = (velocidadI * cos(anguloRad) * tiempo);

  return altura;
}

float getDistanceOfTarget(int targetAxisX, int targetAxisY, float parabolaAxisX, float parabolaAxisY)
{
  float distancia = sqrt(pow(targetAxisX - parabolaAxisX, 2) + pow(targetAxisY - parabolaAxisY, 2));
  return distancia;
}

int main()
{
  int targetAxisX = 100 + rand() % (2000);
  int targetAxisY = 100 + rand() % (2000);
  int velocidadI, angulo;

  float distanceTargetToShoot;

  float tiempo;
  float distanciaDelTiro;
  float alturaDelTiro;

  float alturaEnElTiempo;
  float distanciaEnElTiempo;

  cout << "Da a el objetivo en las coordenadas X" << targetAxisX << "y Y" << targetAxisY << endl;
  do
  {
    cout << "Ingresa la velocidad en m/s\n";
    cin >> velocidadI;

    if (velocidadI < 0)
    {
      cout << "La velocidad no puede ser negativa\n";
      return 0;
    }
    else
    {
      cout << "Ingresa el angulo en grados\n";
      cin >> angulo;
      if (angulo < 0 || angulo > 90)
      {
        cout << "El angulo debe estar entre 0 y 90 grados\n";
        return 0;
      }
      else
      {
        distanciaDelTiro = distancia(velocidadI, angulo);
        tiempo = time(velocidadI, angulo);
        alturaDelTiro = heightInTime(tiempo, velocidadI, angulo);
        distanciaEnElTiempo = distanceInTime(tiempo, velocidadI, angulo);
        alturaEnElTiempo = heightInTime(tiempo, velocidadI, angulo);
      }
    }
  } while (alturaEnElTiempo != targetAxisY && distanciaEnElTiempo != targetAxisX);

  distanciaDelTiro = distancia(velocidadI, angulo);
  tiempo = time(velocidadI, angulo);
  alturaDelTiro = heightInTime(tiempo, velocidadI, angulo);
  distanciaEnElTiempo = distanceInTime(tiempo, velocidadI, angulo);
  alturaEnElTiempo = heightInTime(tiempo, velocidadI, angulo);

  cout << "La distancia del tiro es: " << distanciaDelTiro << endl;
  cout << "El tiempo del tiro es: " << tiempo << endl;
  cout << "La altura del tiro es: " << alturaDelTiro << endl;
  cout << "La distancia en el tiempo es: " << distanciaEnElTiempo << endl;
  cout << "La altura en el tiempo es: " << alturaEnElTiempo << endl;

  return 0;
}