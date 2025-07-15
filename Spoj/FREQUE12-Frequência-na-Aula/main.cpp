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
    int numerodealunos;
    cin >> numerodealunos;
    set<int>alunos;
    int cont = 0;
    for(int i = 0; i < numerodealunos; i++){
        int ra;
        cin >> ra;
        alunos.insert(ra);
    }
    int al = alunos.size(); 
    cout << al << endl;
    return 0;
}

//FREQUE12 - Frequência na Aula
//https://br.spoj.com/problems/FREQUE12/