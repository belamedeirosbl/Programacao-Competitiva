#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <utility>
#include <climits>
typedef long long ll;
using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return true;
    } 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int numero;
        cin >> numero;
        bool resultado = isPrime(numero);
        if(resultado == true){
            cout << "Prime" << endl;
        }else{
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}
//beecrowd | 1221
//https://judge.beecrowd.com/pt/problems/view/1221