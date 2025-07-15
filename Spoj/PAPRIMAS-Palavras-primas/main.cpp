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
//A-27 Z-52 a-1 z-26
int main(){
    char palavra[21];
    while(cin >> palavra){
        int tamanho = strlen(palavra);
        int sum = 0;
        for(int i = 0; i < tamanho; i++){
            int temp = palavra[i];
            if(temp >= 65 && temp <= 90){
                temp -= 38; 
            }else{
                temp -= 96;
            }
            sum += temp;
        }
        if(isPrime(sum)){
            cout << "It is a prime word." << endl;
        }else{
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}

//PAPRIMAS - Palavras primas
//https://br.spoj.com/problems/PAPRIMAS/