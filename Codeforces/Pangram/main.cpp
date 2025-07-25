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

int main(){
    string palavra;
    int size;
    cin >> size;
    cin >> palavra;
    if(size < 26){
        cout << "NO";
    }else{
        int alfa[26] = {0};
        for(int i = 0; i < size; i++){
            int charAtual;
            if(isupper(palavra[i])){
                palavra[i] = tolower(palavra[i]);
            }
            charAtual = palavra[i] - 97;
            
            if(alfa[charAtual] == 0){
                alfa[charAtual] = 1;
            }
        }
        for(int i = 0; i < 26; i++){
            if(alfa[i] == 0){
                cout << "NO";
                break;
            }
            if(i == 25 && alfa[i] == 1){
                cout << "YES";
            }
        }
    }
    return 0;
}

//A. Pangram
//https://codeforces.com/contest/520/problem/A