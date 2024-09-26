#include <iostream>
using namespace std;

int main(){

    double X, Y;

    cout << "enter value for X\n";
    cin >> X;
    cout << "enter value for Y\n";
    cin >> Y;

    double *PX = &X;
    double *PY = &Y;

    cout << "Value for X is " << *PX << endl;
    cout << "Value for Y is " << *PY << endl;
    cout << "Value for X + Y is " << *PX + *PY << endl;

    return 0;
}