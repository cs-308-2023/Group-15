
#include <iostream>
#include "functions.h"

using namespace std;


int gcd_nonrec(int a, int b) {
    while (a > 0 && b > 0) {
        if (a < b) {
            b -= a;
        } else {
            a -= b;
        }
    }
    return ((a > b) ? a : b);
}

int main() {
    int x=56, y=98;
    cout << gcd_nonrec(x,y) << endl;
    return 0;
}
