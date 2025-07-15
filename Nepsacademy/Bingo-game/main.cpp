#include <iostream>
#include <vector>
#include <algorithm> 
#include <set> 
#include <cmath>

using namespace std;
int main(){
    int N,B;
    while(cin >> N >> B && N != 0 && B != 0){
        vector<int>globo;
        set<int>subconj;
        for(int i = 0; i < B; i++){
            int n;
            cin >> n;
            globo.push_back(n);  
        }  

        for(int j = 0; j < B; j++){
            for(int c = 0; c < B; c++){
                int subt = abs(globo[j] - globo[c]);
                subconj.insert(subt);
            }
        }
        
        
        int size = subconj.size();
        if(size == N + 1){
            cout << 'Y' << endl;
        }else{
            cout << 'N' << endl;
        }
    }
        

        
    return 0;
}

//Bingo game
//https://neps.academy/exercise/320