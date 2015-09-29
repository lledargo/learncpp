// C++ code for assignment 1 from Delta FA15 intro to programming class

#include <iostream>
using namespace std;

int edge;
int sa;
int vol;

int sideSA(edge){
	sa = edge^2;
	return sa;
}

int cubeSA(edge){
	sa = (edge^2)*6;
	return sa;
}

int volume(edge){
	vol = edge^3;
	return vol;
}

int main(){
	cout << "Enter the edge of one cube and I will return the surface area of 1 side, all sides, and the volume.\n";
	cout << "Edge Length: ";
	cin >> edge;

	cout << "\nThe surface area of 1 side is: " << sideSA(edge);
	cout << "\nThe surface area of the cube is: " << cubeSA(edge);
	cout << "\nThe volume of the cube is: " << volume(edge) << "\n";

	return 0;
}
