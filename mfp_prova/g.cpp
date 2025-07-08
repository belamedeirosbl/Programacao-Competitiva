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

int main() {
    string palavra; cin >> palavra;
    int size = palavra.size();
    for(int i = 0; i < size; i+=2){
        cout << palavra[i];
    }
    cout << endl;
    for(int i = 1; i < size; i+=2){
        cout << palavra[i];
    }
    cout << endl;

    return 0;
}
