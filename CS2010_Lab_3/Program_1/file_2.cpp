#include <iostream>
using namespace std;


extern int X;
extern int P;
extern int L;
extern int Q;
extern int D;
extern int N;

extern void M(int X);

int main(){

    cout << "enter number of pennies spent\n";
    cin >> X;
    M(X);
    cout << "you have " << L << " Lonnie, " << Q << " Quarters, " << D << " Dimes, " << N << " Nickles and, " << P << " Pennies left" << endl;
    


    return 0;
}
