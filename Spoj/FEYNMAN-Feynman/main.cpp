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
    int num;
    while(cin >> num && num != 0){
        int sum = 0;
        for(int i = 1; i < num+1; i++){
            sum += i*i;
        }
        cout << sum << endl;

    }
    return 0;
}

//FEYNMAN - Feynman
//https://br.spoj.com/problems/FEYNMAN/