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
    int size;
    while(cin >> size){
        if(size == 0) break;
        if(size < 2){
            cout << "0" << endl;
            continue;
        }
        vector<int> vetor(size);
        for(int i = 0; i < size; i++){
            cin >> vetor[i];
        }
        vetor.push_back(vetor[0]);
        vetor.push_back(vetor[1]);
        int cont = 0;
        for(int i = 0; i < size; i++){
            if(vetor[i] > vetor[i+1] && vetor[i+1] < vetor[i+2]){
                cont++;
            }else if(vetor[i] < vetor[i+1] && vetor[i+1] > vetor[i+2]){
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}

//https://www.beecrowd.com.br/repository/UOJ_1089.html
//beecrowd | 1089

