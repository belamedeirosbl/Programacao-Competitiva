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
typedef long long ll;
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for(int j = 0; j < testcase; j++){
        int moedas, altura = 0;
        cin >> moedas;
        for(int i = 1; moedas>=i; i++){
            moedas -= i;
            altura++;
        }
        cout << altura << endl;
    }
    return 0;
}

//A. Watermelon
//https://codeforces.com/contest/4/problem/A