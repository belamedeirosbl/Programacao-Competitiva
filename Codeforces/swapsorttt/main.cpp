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
    int size;
    cin >> size;
    vector<int>numbers;
    vector<pair<int,int> >posicoes;
    for(int i = 0; i < size; i++){
        int x; cin >> x; numbers.push_back(x);
    }
    for(int i = 0; i < size; i++){
        int menor = numbers[i];
        int posTroca = i;
        for(int j = i; j < size; j++){
            if(menor > numbers[j]){
                posTroca = j;
                menor = numbers[j];
            }
        }
        if(menor != numbers[i]){
            posicoes.push_back(make_pair(i, posTroca));
            int temp = numbers[i];
            numbers[i] = numbers[posTroca];
            numbers[posTroca] = temp;
        }
    }
    cout << posicoes.size() << endl;
    for(int i = 0; i < posicoes.size(); i++){
        cout << posicoes[i].first << " " << posicoes[i].second << endl;
     }
    return 0;
}
