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
    int t1,t2;
    int s1,s2; 
    cin >> t1;
    s1 = t1;
    vector<int>v1;
    while(s1--){
        int n; cin >> n;
        v1.push_back(n);
    }
    cin >> t2;
    s2 = t2;
    vector<int>v2;
    while(s2--){
        int n; cin >> n;
        v2.push_back(n);
    }
    sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
    cout << v1[t1-1] << " " << v2[t2-1] << endl;
    
    return 0;
}