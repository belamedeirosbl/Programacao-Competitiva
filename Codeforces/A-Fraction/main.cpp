#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    int best_a = 1, best_b = n - 1;
    for(int a = 1; a < n; ++a) {
        int b = n - a;
        if(a < b && gcd(a, b) == 1) {
            if((double)a / b > (double)best_a / best_b) {
                best_a = a;
                best_b = b;
            }
        }
    }
    cout << best_a << " " << best_b << endl;
    return 0;
}