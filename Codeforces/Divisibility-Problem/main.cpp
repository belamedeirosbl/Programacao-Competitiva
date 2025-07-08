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
    int testcases;
    cin >> testcases;
    for(int c = 0; c < testcases; c++){
        int a, b;
        cin >> a >> b;
        int i = 0;
        if(a%b == 0){
            cout << '0' << endl;
        }else{
            cout << b-(a%b) << endl;
        }
    }
    return 0;
}

//A. Divisibility Problem
//https://codeforces.com/contest/1328/problem/A