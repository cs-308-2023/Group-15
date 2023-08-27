
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

int gcd(int a, int b) {
    if (a==0) return b;
    else if (b==0) return a;
    else if (a < b) return gcd(a, b-a);
    else return gcd(a-b, b);
}

int main() {
    int x=56, y=98;
    cout << gcd(x,y) << endl;
    return 0;
}
