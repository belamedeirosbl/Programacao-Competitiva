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
typedef long long ll;
using namespace std;

int main(){
    int numberofcards;
    cin >> numberofcards;
    vector<int>cards;
    for(int i = 0; i < numberofcards; i++){
        int card;
        cin >> card;
        cards.push_back(card);
    }
    int sumSereja = 0, sumDima = 0, end = numberofcards - 1, start = 0; 
    for(int i = 0; i < numberofcards; i++){
        int larger;
        if(cards[start] > cards[end]){
            larger = cards[start];
            start++;
        }else{
            larger = cards[end];
            end--;
        }
        if(i == 0 || i % 2 == 0){
            sumSereja += larger;
        }else{
            sumDima += larger;
        }
    }
    cout << sumSereja << " " << sumDima;
    return 0;
}

//A. Sereja and Dima
//https://codeforces.com/contest/381/problem/A