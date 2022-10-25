// a calculator program

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num1, num2;
  char op;
  float result;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  if (op == '+')
  {
    result = num1 + num2;
  }
  else if (op == '-')
  {
    result = num1 - num2;
  }
  else if (op == '*')
  {
    result = num1 * num2;
  }
  else if (op == '/')
  {
    result = num1 / num2;
  }
  else
  {
    cout << "Error! operator is not correct";
    exit(0);
  }

  cout << result;
  return 0;
}