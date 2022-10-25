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

int main()
{
	int blanco = 2;
	int numaleatorio, contador;
	int velocidad, angulo, distanciared;
	srand(time(NULL));
	numaleatorio = 100 + rand() % (2000);
	int numMax = numaleatorio + blanco;
	cout << "Derriba el objetivo\n";
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
				distanciared = distancia(velocidad, angulo);
				cout << "Distancia del tiro " << distanciared << endl;
				cout << "Distancia aleatoria entre " << numaleatorio << "y" << numMax << endl;
				if (distanciared < numaleatorio)
				{
					cout << "Tu disparo cayo a " << numaleatorio - distanciared << " del objetivo, intentalo de nuevo\n";
				}
				if (distanciared > numaleatorio)
				{
					cout << "Tu disparo cayo despues a " << distanciared - numaleatorio << ", intentalo de nuevo\n";
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
	} while (distanciared < numaleatorio || numMax < distanciared);

	cout << "Felicidades, lo lograste en " << contador << " intentos" << endl;

	// sistem("pause");
	return 0;
}