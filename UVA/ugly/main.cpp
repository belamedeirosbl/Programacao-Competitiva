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

vector<long long int>primos;

void isPrime(){
    int ans = 0;
    for(int n = 7; n <= 100000; n++ ){
        for(int j = 2; j <= sqrt(n);j++){
            if(n%j == 0){
                ans = -1;
                break;
            }
        }
        if(ans == 0){
            primos.push_back(n);
            cout << "primo: " << n << endl;
            if(primos.size() == 1501){
                break;
            }
        }
    }
}


int main(){
    isPrime();
    long long int cont = 1;
    long long int n = 1; 
    while(cont <= 1500){
        if((n%2 == 0 || n%5 == 0 || n%3 == 0)){
            long long int ans = 0;
            for(int i = 0; i < primos.size(); i++){
                if(n <= primos[i])break;
                if(n%primos[i] == 0){
                    ans=-1;break;
                }
            }
            if(ans == 0){
                cont ++;
                //cout << "numero " << cont << ":" << n << endl;
            }
        }
        if(cont == 1500){
            break;
        }
        n++;
    }

    cout << n << endl;

    return 0;
}
