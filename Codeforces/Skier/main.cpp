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
    int cases;
    cin >> cases;
    while(cases--){
        int pt = 0;
        string direcoes;
        cin >> direcoes;
        pair<int,int>atual;
        pair<int,int>pass;
        atual.first = 0; atual.second = 0;
        map<pair<int,int>, vector<pair<int,int>>>mp;
        
        for(int i = 0; i < direcoes.size(); i++){
            pass = atual;
            if(direcoes[i] == 'N'){
                atual.second += 1;
            }
            else if(direcoes[i] == 'S'){
                atual.second -= 1;
            }
            else if(direcoes[i] == 'W'){
                atual.first -= 1;
            }
            else{//E 
                atual.first += 1;
            }
            
            if(mp.find(atual) == mp.end()){//não encontrou
                mp[atual].push_back(pass);
                mp[pass].push_back(atual);
                pt+=5;
            }else{
                int j;
                for(j = 0; j < mp[atual].size(); j++){
                    if(mp[atual][j] == pass){
                        pt++;
                        break;
                    }
                }   
                if(j == mp[atual].size()){
                    pt+=5;
                    mp[atual].push_back(pass);
                    mp[pass].push_back(atual);
                }
            }
        }
        cout << pt << endl;
    }
    
    return 0;
}

//C. Skier
//https://codeforces.com/contest/1351/problem/C