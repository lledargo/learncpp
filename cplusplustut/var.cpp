// This code is intended for learning C++ variables/types
#include <iostream>
using namespace std;

int a;
int i;

int rollover()
{
  i = 0;
  a = 65530;
  while (i < 15)
  {
    cout << a << "\n";
    a++;
    i++;
  }
  return 0;
}

int main ()
{
  rollover();

  return 0;
}
