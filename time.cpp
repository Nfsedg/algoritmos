#include <iostream>
#include <math.h>

using namespace std;

bool validateDate(int day, int month, int year)
{
  if (day > 0 && month > 0 && year > 0)
  {
    if (month < 12)
    {
      switch (month)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if (day <= 31)
        {
          return true;
        }
      case 4:
      case 6:
      case 9:
      case 11:
        if (day <= 30)
        {
          return true;
        }
        else
        {
          return false;
        }
      case 2:
        if (day < 28)
        {
          return false;
        }
        else
        {
          if (year % 2 == 0 && year % 100 != 0 && day == 29)
          {
            return true;
          }
          else if (year % 400 == 0 && day == 29)
          {
            return true;
          }
          else
          {
            return false;
          }
        }
      default:
        break;
      }
    }
  }
}

int main()
{
  int day, month, year;
  cout << "Dame la fecha día, mes año, el año es en 4 dígitos";
  cin >> day, month, year;
  if (validateDate(day, month, year))
  {
    cout << "Fecha correcta";
  }
  else
  {
    cout << "Fecha invalida";
  }

  return 0;
}