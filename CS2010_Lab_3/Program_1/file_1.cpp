#include <iostream>
using namespace std;

    int X = 0;
    int Q = 0;
    int D = 0;
    int N = 0;
    int P = 0;
    int L = 0;


    void M(int X){
        X = 100 - X;
        while (X > 0){
            if (X >= 100) {
            L+=1;
            X-=100;
        }else if (X <= 99 && X >=25){
            Q+=1;
            X-=25;
        }else if (X <= 24 && X >=10){
            D+=1;
            X-=10;
        }else if (X <= 9 && X >=5 ){
            N+=1;
            X-=5;
        }else if(X <= 4 && X > 0){
            P+=1;
            X-=1;
        }
    }
}

