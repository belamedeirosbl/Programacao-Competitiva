#include <vector>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main(){
    int c; cin >> c;
    while(c--){             
        int n, k;
        cin >> n >> k;
        set<int>nd;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            nd.insert(x);
        }  
        if(nd.size() > k){
            cout << -1 << endl;
        }else{
            cout << n*k << endl;
            int numUm = k - nd.size();
            for(int i = 0; i < n; i++){
                for(auto j : nd){
                    cout << j << " ";
                }
                for(int l = nd.size(); l < k; l++){
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}