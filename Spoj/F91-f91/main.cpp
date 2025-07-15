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
using namespace std;

int f91(int n){
    if(n <= 100){
        return f91(f91(n+11));
    }else{
        return n-10;
    }
}
int main(){
    int numero, resultado;
    while(cin >> numero){
        if(numero == 0){
            break;
        }
        resultado = f91(numero);
        cout << "f91(" << numero << ") = " << resultado << endl;
        
    }
    return 0;
}

//F91 - f91
//https://br.spoj.com/problems/F91/