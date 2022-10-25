// program to create a file, write information to it, read the information back from it and
// display it on the screen
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream file;
  ofstream outFile; // stream class to write on files
  ifstream inFile;  // stream class to read from files
  int num1, num2;
  int sum;

  file.open("file.txt");

  if (file.is_open())
  {
    // read intire file file.txt
    while (!file.eof())
    {
      char characterData = file.get();
      cout << characterData;
    }
    file.close();
    file.open("file.txt", ios::in | ios::out);
    file.seekg(24, ios::beg);
    file << "con";
    file.seekg(0, ios::end);
    file << "Edgar \n";
  }
  else
  {
    cout << "File is not open" << endl;
  }
  return 0;
}