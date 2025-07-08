#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main(){
    int minCM; cin >> minCM;
    vector<int>meses;
    for(int i = 0; i < 12; i++){
        int x; cin >> x;
        meses.push_back(x);
    }
    sort(meses.begin(), meses.end());
    int sum = 0, min = 0;
    for(int i = 11; sum < minCM && i >= 0; i--){
        sum += meses[i]; min++;
    }   
    if(sum < minCM){
        min = -1;
    }
    cout << min << endl;
    return 0;
}

//A. Business trip
//https://codeforces.com/contest/149/problem/A