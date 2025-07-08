#include <iostream>

using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    for(int i = 0; i < testcases; i++){
        int size; cin >> size;
        vector<int>precos;
        for(int j = 0; j < size; j++){
            int x; cin >> x;
            precos.push_back(x);
        }
        int min = precos[size-1];
        int contador = 0;
        for(int j = size-2; j >= 0; j--){
            if(precos[j] <= min){
                min = precos[j];
            }else{
                contador++;
            }
        }
        cout << contador << endl;
    }
    
    return 0;
}
//B. Bad Prices
//https://codeforces.com/contest/1213/problem/B