// program to implement quicksort algorithm

#include <iostream>
using namespace std;

void quicksort(int[], int, int);
int partition(int[], int, int);

int main()
{
  int a[50], n, i;
  cout << "How many elements?";
  cin >> n;
  cout << "

      Enter array elements:
