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
    int size, pair = 0;
    cin >> size;
    map<int,int>mp;
    while(size--){
        int x;
        cin >> x;
        mp[x]++;
        if(mp[x] == 2){
            mp[x] = 0;
            pair++;
        }
    }
    cout << pair/2 << endl;
}

//J. Parallelograms
//https://codeforces.com/gym/101755/problem/J