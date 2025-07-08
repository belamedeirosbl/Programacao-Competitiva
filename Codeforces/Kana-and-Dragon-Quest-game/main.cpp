#include <iostream>
using namespace std;
int main(){
    int cases; cin >> cases;
    while(cases--){
        
        long long n,m,h;
        cin >> h >> n;
        while(n > 0 && h > 20){
            h = (h/2)+10;
            n--;
        }
        cin >> m;
        m *= 10;
        if(h <= m){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
 
    return 0;
}

//B. Kana and Dragon Quest game
//https://codeforces.com/contest/1337/problem/B