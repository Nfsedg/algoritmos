#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_SIZE = 10;
int queue[MAX_SIZE];
int head = -1;
int tail = -1;

void gotoxy(int x, int y)
{
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}
void ponpatallainicial()
{
  int renglon;
  gotoxy(5, 1);
  cout << "no imprimiendo";
  gotoxy(20, 1);
  cout << "impresiones en cola";
  for (renglon = 2; renglon < 13; renglon++)
  {
    gotoxy(20, renglon);
    cout << "!";
    gotoxy(40, renglon);
    cout << "!";
  }
}

void push(int data)
{
  if (MAX_SIZE == tail + 1)
  {
    gotoxy(21, 12);
    cout << "Cola llena" << endl;
    return;
  }
  queue[tail + 1] = data;
  tail = (tail + 1) % MAX_SIZE;
  gotoxy(21, 12);
  cout << "          " << endl;
}

void pop()
{
  if (head == -1 && tail == -1)
  {
    gotoxy(21, 12);
    cout << "Cola vacia" << endl;
    return;
  }
  else if (head == tail)
  {
    gotoxy(21, 12);
    cout << "Cola vacia" << endl;
    head = -1;
    tail = -1;
    return;
  }
  gotoxy(21, 12);
  cout << "        " << endl;
  head = (head + 1) % MAX_SIZE;
}

void cleanScreen()
{
  for (int i = 0; i < 10; i++)
  {
    gotoxy(21, i + 2);
    cout << "           " << endl;
  }
}

// void push(int arr[], int *rear, int newValue, int MAX_SIZE_ARR) {
//	if(MAX_SIZE_ARR == *rear) {
//		cout << "The queue is full \n";
//		return;
//	} else {
//		int arrIndex = *rear + 1;
//		*rear = *rear + 1;
//		arr[arrIndex] = newValue;
//	}
// }
//
// void pop(int arr[],int MAX_SIZE_ARR, int *front, int *rear) {
//	if(*front == -1 && *rear == -1) {
//		cout << "The queue is empty";
//		return;
//	} else if(*front== *rear) {
//		*front = *rear = -1;
//	}else {
//		*front = (*front + 1);
//	}
// }

void printing(int arr[], int front)
{
}

int main()
{
  srand(time(NULL));
  char c = ' ';
  ponpatallainicial();

  //	int MAX_SIZE_ARR = 10;
  //	int front = -1;
  //	int rear = -1;
  //	int cola[MAX_SIZE_ARR];
  int random;

  do
  {

    if (kbhit())
    {
      c = getch();
      if (c == 'D')
      {
        random = rand() % 5000;
        push(random); // hacer un pus aleatorio;
      }
    }

    if (tail > -1)
    {
      int lineI = 2;
      cleanScreen();
      for (int i = head + 1; i < tail + 1; i++)
      {
        gotoxy(21, lineI);
        lineI++;
        cout << queue[i] << endl;
      }
      gotoxy(5, 2);
      cout << queue[head + 1] << endl;
      gotoxy(5, 4);
      cout << "Imprimiendo:" << endl;
      for (int i = 0; i < queue[head + 1] + 1; i++)
      {
        gotoxy(5, 5);
        cout << i << endl;
      }
      gotoxy(5, 2);
      cout << "    " << endl;
      gotoxy(5, 5);
      cout << "    " << endl;
      pop();
    }
    // verificar si hay datos en la cola y hacer un pop y empezar el conteo
    //  hasta el numero alerooio que se saco del pop
  } while (c != 'S');
  system("pause");
  return 0;