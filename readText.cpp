#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string filename;
  string text;
  string line;
  int count = 0;
  cout << "Enter the name of the file: ";
  cin >> filename;
  cout << "Enter the text to search, (the search recognize the uppercase and lowercase): ";
  cin >> text;
  ifstream file(filename);
  if (file.is_open())
  {
    while (getline(file, line))
    {
      if (line.find(text) != string::npos)
      {
        count++;
      }
    }
    file.close();
  }
  else
  {
    cout << "Unable to open file";
  }
  cout << "The text appears " << count << " times";
  return 0;
}