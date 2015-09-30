// C++ code for assignment 1 from Delta FA15 intro to programming class

#include <iostream>
using namespace std;

int edge;
int sa;
int vol;
int exp;
int num;
int result;

int power(int exp, int num)
{
	int i = 0;
	result = 1;

	while(i < exp)
	{
		result = result * num;
		i++;
	}
	return result;
}

int sideSA(int edge){
	sa = power(2,edge);
	return sa;
}

int cubeSA(int edge){
	sa = power(2,edge)*6;
	return sa;
}

int volume(int edge){
	vol = power(3,edge);
	return vol;
}

int main(){
	cout << "Enter the edge of one cube and I will return the surface area of 1 side, all sides, and the volume.\n";
	cout << "Edge Length: ";
	cin >> edge;

	cout << "\nThe surface area of 1 side is: " << sideSA(edge) << " Units^2";
	cout << "\nThe surface area of the cube is: " << cubeSA(edge) << " Units^2";
	cout << "\nThe volume of the cube is: " << volume(edge) << " Units^3\n";
	
	return 0;
}
