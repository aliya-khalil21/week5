#include <iostream>
#include <windows.h>
using namespace std;

// Function Protype
void printmaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printpacman(int x, int y);
void printpacman(int x, int y);
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x, int y)
{
  gotoxy(x, y);
  cout << " ";
}
void printpacman(int x, int y)
{
  gotoxy(x, y);
  cout << "P";
}
void printMaze()
{
  cout << "%%%%%%%%%%%%%%%" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%             %" << endl;
  cout << "%%%%%%%%%%%%%%%" << endl;
}
main()
{
  int pacmanX = 4; // X Coordinate of Pacman
  int pacmanY = 4; // Y Coordinate of Pacman
  bool gameRunning = true;

  system("cls");
  printMaze();
  printpacman(pacmanX, pacmanY);
  while (gameRunning)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
      if (nextLocation == ' ')
      {
        erase(pacmanX, pacmanY);
        pacmanX = pacmanX - 1;
        printpacman(pacmanX, pacmanY);
      }
    }

    if (GetAsyncKeyState(VK_RIGHT))
    {
      char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
      if (nextLocation == ' ')
      {
        erase(pacmanX, pacmanY);
        pacmanX = pacmanX + 1;
        printpacman(pacmanX, pacmanY);
      }
    }
    if (GetAsyncKeyState(VK_UP))
    {
      char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
      if (nextLocation == ' ')
      {
        erase(pacmanX, pacmanY);
        pacmanY = pacmanY - 1;
        printpacman(pacmanX, pacmanY);
      }
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
      char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
      if (nextLocation == ' ')
      {
        erase(pacmanX, pacmanY);
        pacmanY = pacmanY + 1;
        printpacman(pacmanX, pacmanY);
      }
    }
    if (GetAsyncKeyState(VK_ESCAPE))
    {
      gameRunning = false;
    }
    Sleep(200);
  }
}
