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
int main(){
    int m, n;
    cin >> m >> n;
    int limite = -2;
    int limAnt = limite;
    bool ans = true;
    for(int i = 0; i < m; i++){
        bool zero = false; 
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            if(x == 0 && !zero){
                limite = j;
            }else{
                if(!zero){//encontra o ultimo zero
                    zero = true;
                }
                if(j <= limAnt+1){
                    ans = false;
                }
            }
        }
        if(limite > limAnt){
            limAnt = limite;
        }
        
    }
    if(ans){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

}

//ESCADA14 - Matriz Escada
//https://br.spoj.com/problems/ESCADA14/