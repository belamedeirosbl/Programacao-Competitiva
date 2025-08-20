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
    int in; cin >> in; 
    map<int,int>mp;
    int max = 1;
    for(int i = 0; i < in; i++){
        int x; cin >> x;
        if(mp.find(x)!= mp.end()){
            mp[x]++;
            if(mp[x] >= max){
                max = mp[x];
            }
        }else{
            mp[x]=1;
        }
    }
    
    for(auto p:mp){
        if(p.second == max){
            cout << p.first << endl;
        }
    }

}

//ELEICOES - Eleições
//https://br.spoj.com/problems/ELEICOES/