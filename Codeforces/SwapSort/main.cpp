#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
    int c;
    int sum = 0;
    for(int i = 0; i < c; i++){
        int x; cin >> x;
        sum = abs(i-x);
    }
    if(sum % 2 == 0){
        cout << "cslnb" << endl;
    }else{
        cout << "sjfnb" << endl;
    }
    return 0;
}

//A. SwapSort
//https://codeforces.com/contest/489/problem/A