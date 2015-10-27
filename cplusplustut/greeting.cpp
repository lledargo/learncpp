// Greet the user by name
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string name;
  string mystr;
  int fav;
  int myfav = 3;

  cout << "Hello, what if your name? ";
  getline (cin,name);
  cout << "Pleasure to meet you, " << name << ".\n";

  cout << "So " << name << ", what is your favorite number? ";
  getline (cin,mystr);
  stringstream(mystr) >> fav;

  if (fav != myfav) {
    cout << fav << "! thats good number, but " << name << " my favorite number is " << myfav << ".\n";
  }else{
    cout << "Hey! " << fav << " is my favorite number too!\n";
  }

  return 0;
}
