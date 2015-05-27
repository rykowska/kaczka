WHAT IS LOVE? BABY DONT HURT ME, DONT HURT ME, NO MORE
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 20; // Liczebnoœæ zbioru.

// Program g³ówny
//---------------

int main()
{
  int d[N],i,pmin,pmax,p;
  
  cout << "Dwukierunkowe Sortowanie babelkowe\n"
          "----------------------------------\n"
          "     (C)2005  Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Najpierw wype³niamy tablicê d[] liczbami pseudolosowymi
// a nastêpnie wyœwietlamy jej zawartoœæ

  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) d[i] = rand() % 100;
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;

// Sortujemy

  pmin = 0; pmax = N - 2;
  do
  {
    p = -1;
    for(i = pmin; i <= pmax; i++)
      if(d[i] > d[i + 1])
      {
        swap(d[i], d[i + 1]);
        p = i;
      }
    if(p < 0) break;
    pmax = p - 1;
    p = -1;
    for(i = pmax; i >= pmin; i--)
      if(d[i] > d[i + 1])
      {
        swap(d[i], d[i + 1]);
        p = i;
      }
    pmin = p + 1;
  } while(p >= 0);

// Wyœwietlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
} 