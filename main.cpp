#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void MethodDychotomy(void);

int main(void){
    float a; 

    cout << "Make a number: ";
    cin >> a;
    cout << endl;
    
    MethodDychotomy();

    return 0;
}

void MethodDychotomy(void){
    double a, c, b;
    int count, choice1, count2 = 0;
    bool choice = true;

    cout << "How many digits in the number, before the comma? ";
    cin >> count;
    cout << endl;

    a = 0;
    b = (pow(10, count));

    for (; choice == true; ){
        count2 += 1;
        c = (a + b) / 2;

        cout << "Your number is more than, " << c << "? (1 - Yes, 2 - No, 3 - This number): ";
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
            case 1:
                a = c;
                break;
            case 2:
                b = c;
                break;
            case 3:
                cout << "Your hidden number is equal to - " << c << ", number of iterations - " << count2 << endl;
                choice = false;
                break;
            default:
                break;
        }
    }
}