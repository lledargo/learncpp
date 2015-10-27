#include <iostream>
using namespace std;

int numbers[12];
int large,small;

int isLarger (int a,int b) {
        if (a < b) { return b; }
        else { return a; }
}

int isSmaller(int a,int b) {
        if (a > b) { return b; }
        else { return a; }
}

int main() {

        cout << "You will be asked for 12 numbers individually";
        for (int i = 0; i <12; i++) {
                cout << "\nplease enter number" << i +1 << "of 12.";
                cin >> numbers[i];

                if (i>0) {
                        large = isLarger{large,numbers[i]};
                        small = isSmaller{small,numbers[i]};
                }else{
                        large = numbers[i];
                        small = numbers[i];
                }
        }
        cout << "\nOf the numbers: " << numbers << endl;
        cout << large << " is the largest and " << small << " is the smallest." << endl;

        return 0;
}
