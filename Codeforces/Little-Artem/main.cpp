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
    int cases; cin >> cases;
    while(cases--){
        char colour = 'B';
        int n,m; cin >> n >> m;
        int size = n*m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(((i == 0 && j == 1) || (i == 1 && j == 0)) && size % 2 == 0){
                    colour = 'W';
                    cout << "B";
                }else{
                    cout << colour;
                    if(colour == 'B'){
                        colour = 'W';
                    }else{
                        colour = 'B';
                    }
                }
            }
            cout << endl;
        }
    }
}

//A. Little Artem
//https://codeforces.com/contest/1333/problem/A