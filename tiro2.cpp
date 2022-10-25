#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int numaleatorio, contador, distaleatoria, altaleatoria, rangnumaleatorio2;
  float velocidad, angulo, gravedad, angulog, distancia, altura, antes, despues;
  float rangnumaleatorio, objetivo;
  srand(time(NULL));
  distaleatoria = 100 + rand() % (2001);
  altaleatoria = 100 + rand() % (2001);
  cout << "Derriba el objetivo\n";
  cout << "El objetivo esta a " << distaleatoria << "m\n";
  do
  {
    cout << "Dame la velocidad en m/s\n";
    cin >> velocidad;
    if (velocidad > 0)
    {
      cout << "Dame el angulo de disparo\n";
      cin >> angulo;
      if (angulo > 0 && angulo <= 89)
      {
        gravedad = 9.81;
        angulog = (angulo * 3.1416) / 180;
        distancia = (velocidad * velocidad) * (sin(angulog * 2)) / gravedad;
        altura = (velocidad * velocidad) * ((sin(angulog)) * (sin(angulog))) / (gravedad * 2);
        rangnumaleatorio = distaleatoria + 1;
        rangnumaleatorio2 =
            antes = distaleatoria - distancia;
        despues = distancia - distaleatoria;

        if ((distancia >= distaleatoria && distancia <= distaleatoria))
        {
          cout << "Tu disparo dio en el rango\n";
          objetivo++;
        }
        else
        {
          if (distancia < distaleatoria)
          {
            cout << "Tu disparo cayo " << antes << "m antes del objetivo, intentalo de nuevo" << endl;
          }

          if (distancia > distaleatoria)
          {
            cout << "Tu disparo cayo " << despues << "m despues del objetivo, intentalo de nuevo" << endl;
          }
        }

        contador++;
      }
      else
      {
        cout << "Ingresa un angulo mayor a 0 y menor a 90 grados\n";
      }
    }
    else
    {
      cout << "Ingresa una velocidad mayor a cero\n";
    }
  } while (objetivo != 1);

  cout << "Felicidades!!!, lo lograste en " << contador << " intentos" << endl;

  system("pause");
  return 0;
}
