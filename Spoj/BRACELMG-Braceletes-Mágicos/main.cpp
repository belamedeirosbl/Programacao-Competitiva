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
    int cases;
    cin >> cases; 
    while(cases--){
        string palavraProibida;
        string bracelete;
        cin >> palavraProibida >> bracelete;
        bracelete += bracelete;
        bool validate = false;
        int j = 0;
        for(int i = 0; i < bracelete.size(); i++){
            if(palavraProibida[j] == bracelete[i]){
                j++;
                if(j == palavraProibida.size()){
                    validate = true;
                    break;
                }
            }else{
                j = 0;
            }

        }
        j = 0;
        for(int i = bracelete.size(); i >= 0; i--){
            if(palavraProibida[j] == bracelete[i]){
                j++;
                if(j == palavraProibida.size()){
                    validate = true;
                    break;
                }
            }else{
                j = 0;
            }
        }

        if(validate){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
            
    }
    return 0;
}

//BRACELMG - Braceletes Mágicos
//https://br.spoj.com/problems/BRACELMG/