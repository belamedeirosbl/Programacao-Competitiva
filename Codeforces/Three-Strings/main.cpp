#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int c; cin >> c;
    while(c--){
        string a, b, c;
        cin >> a >> b >> c;
        bool validate =  true;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != c[i] && b[i] != c[i]){
                validate = false; break;                
            }
        }
        if(validate){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}

//A. Three Strings
//https://codeforces.com/contest/1301/problem/A
