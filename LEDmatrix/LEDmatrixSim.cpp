/*
This code initializes an ascii matrix to scroll messages and play animations
*/
#include <iostream>
#include "letters.h"
using namespace std;

//declartions
int x,y;


//create disply class to hold matrix information
class display {
  //char initChar[2]="x";

public:
  char **matrix ;
  int width;
  int height;
  void set_size(int,int);
  void fill (int,int,char[][8],int);
};


//Initialize the array
void display::set_size (int x, int y)
{
  this->height = y;
  this->width = x;
  this->matrix = new char * [this->height];

  for (int i=0; i <= this->height; i++){
      this->matrix [i] = new char [this->width];
  }
}


//fill the display.
void display::fill (int x, int y, char msg[][8], int offsetx){
  int xs = x-offsetx;
  //int xo = x+offsetx;
  if (x >= this->width-1) {return;}
  if (y >= this->height-1) {return;}


// start psuedo code
    if (matrix [y][x+1] != msg [y][xs+1])
      {fill(x+1,y,msg,offsetx);}
    if (matrix [y+1][x] != msg [y+1][xs])
      {fill(x,y+1,msg,offsetx);}

    if (msg[y][xs] == NULL)
    {
      matrix[y][x]='.';
    }else{
      matrix[y][x]=msg[y][xs];
    }

// end psuedo code */

  /*if (matrix[y][x]!=msg[y][xs]){

    if (msg[y][xs]!=' ' && msg[y][xs]!='*'){
      matrix[y][x]=' ';
    }else{
    matrix[y][x]=a[y][xs];
    }

    if (matrix[y][x+1]!=msg[y][xs+1]){
      fill(x+1,y,msg,offsetx);
    }
    if (matrix[y+1][x]!=msg[y+1][xs]){
      fill(x,y+1,msg,offsetx);
    }
  }*/
}



int main ()
{
  cout << "height of array? ";
  cin >> y;
  cout << "width of array? ";
  cin >> x;

  display dsp;

  dsp.set_size(x+1,y+1);
//start debug

// end debug */
  for (int o=8; o>-(8); o--){
    dsp.fill(0,0,a,o);

    cout << endl;

    for (int i=0; i<dsp.height; i++)
      {cout << dsp.matrix[i] << endl;}

  }
  return 0;
}
