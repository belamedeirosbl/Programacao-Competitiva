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
#include <iomanip>  

using namespace std;
int main(){
    int testecase;
    cin >> testecase;
    for(int i = 0; i < testecase; i++){
        int a,b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << endl;
        }else{
            int diferenca = b - a;
            if((diferenca > 0 && diferenca % 2 != 0) || (diferenca < 0 && diferenca % 2 == 0)){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
 
    }
    return 0;
}

//A. Add Odd or Subtract Even
//https://codeforces.com/contest/1311/problem/A