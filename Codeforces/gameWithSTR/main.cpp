#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int size = s.size();
    vector<int>v(size,0);
    
    int jogada = 0;
    int i = 0, j = 1;
    while(j < size){
        if(i > 0 && v[i] == -1){
            while(i >= 0 && v[i] == -1){
                i--;
            }
        }
        if(v[i] == -1 && i == 0){
            i = j;
            j++;
        }
        if(j == size){
            break;
        }
        if(s[i] == s[j]){
            jogada++;
            v[i] = -1; v[j] = -1;
            j++;    
        }else{
            i=j; j++;
        }
    }
    cout << size << endl;
    if(jogada == 0 || jogada % 2 == 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    
    return 0;
}