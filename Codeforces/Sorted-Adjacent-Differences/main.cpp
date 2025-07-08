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
    int cases;
    cin >> cases;
    while(cases--){
        int size;
        cin >> size;
        vector<int>v;
        for(int i = 0; i < size; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int i = size/2 - 1;
        int j = size/2;
        if(size % 2 != 0){
            cout << v[size/2] << " ";
            j++;
        }
        while(i >= 0 && j != size){
            cout << v[i] << " " << v[j] << " ";
            j++;i--;
        }
        cout << endl;
    }
    return 0;
}

//B. Sorted Adjacent Differences
//https://codeforces.com/contest/1339/problem/B