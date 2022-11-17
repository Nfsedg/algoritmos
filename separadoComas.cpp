[9:08 p. m., 13 / 11 / 2022] Emanuel Gálvez : #include<iostream>
#include <stdlib.h>
#include <fstream>
                                              using namespace std;

void escribirFrases();

int main()
{
  escribirFrases();

  system("pause");
  return 0;
}

void escribirFrases()
{
  ofstream archivo;
  string nombreArchivo, frase;
  char rpt;

  cout << "Digite el nombre del archivo: ";
  getline(cin, nombreArchivo);

  archivo.open(nombreArchivo.c_str(), ios::out); // Creamos el archivo

  if (archivo.fail())
  { // Si a ocurrido algun error
    cout << "No se pudo abrir el archivo";
    exit(1);
  }

  do
  {
    fflush(stdin);
    cout << "Digite una frase: ";
    getline(cin, frase);
    archivo << frase << endl;

    cout << "\nDesea agregar otra frase(S/N): ";
    cin >> rpt;
  } while ((rpt == 'S') || (rpt == 's'));

  archivo.close(); // Cerramos el archivo
}
[9:08 p. m., 13 / 11 / 2022] Emanuel Gálvez : ahí esta broo
                                              [9:10 p. m., 13 / 11 / 2022] EdgarP : Hay,
                                                                                    deja lo analizo,
                                                                                    que está confuso en what's xD
                                                                                    [9:19 p. m., 13 / 11 / 2022] Emanuel Gálvez : Okey bro
                                                                                                                                  [9:23 p. m., 13 / 11 / 2022] EdgarP : hmm,
                                                                                                                                                                        esta distinto,
                                                                                                                                                                        usa otros tipos de tipos variables y funciones
                                                                                                                                                                        [9:23 p. m., 13 / 11 / 2022] Emanuel Gálvez : Pero no te preocupes
                                                                                                                                                                                                                      [9:23 p. m., 13 / 11 / 2022] Emanuel Gálvez : Ya lo hice
                                                                                                                                                                                                                                                                    [9:23 p. m., 13 / 11 / 2022] Emanuel Gálvez : Ya lo mandé
                                                                                                                                                                                                                                                                                                                  [9:23 p. m., 13 / 11 / 2022] Emanuel Gálvez : Gracias de todas formas
                                                                                                                                                                                                                                                                                                                                                                [9:23 p. m., 13 / 11 / 2022] Emanuel Gálvez : Solo le cambié algunas cosas
                                                                                                                                                                                                                                                                                                                                                                                                              [9:24 p. m., 13 / 11 / 2022] EdgarP : jaja a ta bueno
                                                                                                                                                                                                                                                                                                                                                                                                                                                    [9:24 p. m., 13 / 11 / 2022] EdgarP : creo que me hiba a tardar más en entender ese código xD
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          [9:24 p. m., 13 / 11 / 2022] EdgarP : yo agarre directamente el del profe y de ahí lo terminé
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                [1:01 a. m., 14 / 11 / 2022] Emanuel Gálvez : Sii ya ví bro
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              [4:55 p. m., 17 / 11 / 2022] Emanuel Gálvez : /*programa que dado un archivo de datos separado con comas cpon extension txt o csv
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   extraiga las posiciones inicial y final de los datos solicitados segun el lugar
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   de la coma, guardar ñlos datos en un arreglo y ordenarlo*/
#include <iostream>
#include <fstream>
#include <conio.h>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            using namespace std;
struct primeroultimo // tipo nuevo de dato que guardara las posiciones de los textos separados por coma
{
  int inicio, final;
};
struct tipoalumno // aqui es un tipo nuevo para guardar los datos de cada alumno
                  // esto se hara con un arreglo
{
  long matricula;
  char nombre[50];
  float cal[3];
};
primeroultimo buscacomas(int posicion, char buscar[]) /* funcion que me regresa las
  posiciones de ininici y fin de los textos egu  la coma solicitada en posicion*/
{
  int cuenta, comas;
  primeroultimo resultado;
  cuenta = 0;
  comas = 0;
  resultado.inicio = 0;
  resultado.final = 0;
  while (buscar[cuenta] != '\0')
  {
    if (buscar[cuenta] == ',')
    {
      comas++;
      if (comas != 1)
        resultado.inicio = resultado.final + 2;
      resultado.final = cuenta - 1;
      if (comas == posicion)
        return resultado;
    }
    cuenta++;
  }
  resultado.inicio = resultado.final + 2;
  resultado.final = cuenta - 1;
  return resultado;
}
void extraecadena(char cadenaorigen[], char cadenadestino[], primeroultimo posiciones)
// funcion que copia del texto origen al texto destio segun las posiciones dadas
{
  int indice1, indice2;
  for (indice1 = posiciones.inicio, indice2 = 0; indice1 <= posiciones.final; indice1++, indice2++)
    cadenadestino[indice2] = cadenaorigen[indice1];
  cadenadestino[indice2] = '\0';
}
int main()
{
  char nombrearchivo[40], texto[100], dato[50];
  ifstream leer;
  primeroultimo valor;
  tipoalumno alumnos[50], temporal;
  int indice, indicealumno = 0, catidaddealumnos, indice1, indice2;
  cout << "Dame el nombre del archivo de texto separado por comas con extension txt o csv\n";
  cin >> nombrearchivo;
  leer.open(nombrearchivo);
  if (leer.is_open())
  {
    while (!leer.eof())
    {
      leer.getline(texto, 100);
      cout << texto << endl;
      valor = buscacomas(1, texto);
      extraecadena(texto, dato, valor);
      alumnos[indicealumno].matricula = atol(dato);
      cout << "inicio " << valor.inicio << " final " << valor.final;
      cout << " " << texto[valor.inicio] << texto[valor.final] << endl;
      for (indice = valor.inicio; indice <= valor.final; indice++)
        cout << texto[indice];
      cout << endl;
      valor = buscacomas(2, texto);
      extraecadena(texto, alumnos[indicealumno].nombre, valor);
      valor = buscacomas(3, texto);
      extraecadena(texto, dato, valor);
      alumnos[indicealumno].cal[0] = (float)atof(dato);
      valor = buscacomas(4, texto);
      extraecadena(texto, dato, valor);
      alumnos[indicealumno].cal[1] = (float)atof(dato);
      indicealumno++;
    }
    catidaddealumnos = indicealumno;
    // pinta datos desordenados
    for (indicealumno = 0; indicealumno < catidaddealumnos; indicealumno++)
    {
      int min = indicealumno;
      for (long i = indicealumno; i < catidaddealumnos; i++)
      {
        if (alumnos[i].matricula < alumnos[min].matricula)
        {
          min = i;
          alumnos[indicealumno].matricula;
        }
      }
      min = catidaddealumnos;
      // intercambio
      alumnos[indicealumno].matricula;
      cout << "matricula " << alumnos[indicealumno].matricula;
      cout << " nombre " << alumnos[indicealumno].nombre << endl;
    }
    // ordenamiento burbuja
    for (indice1 = 0; indice1 < catidaddealumnos - 1; indice1++)
      for (indice2 = indice1 + 1; indice2 < catidaddealumnos; indice2++)
        if (alumnos[indice1].matricula > alumnos[indice2].matricula)
        {
          temporal = alumnos[indice1];
          alumnos[indice1] = alumnos[indice2];
          alumnos[indice2] = temporal;
        }
    cout << "Los elemementos ordenados por matricula\n";
    for (indicealumno = 0; indicealumno < catidaddealumnos; indicealumno++)
    {
      cout << "matricula " << alumnos[indicealumno].matricula;
      cout << " nombre " << alumnos[indicealumno].nombre << endl;
    }
  }
  else
    cout << "Error en la apertura del archivo\n";
  system("pause");
  return 0;
}