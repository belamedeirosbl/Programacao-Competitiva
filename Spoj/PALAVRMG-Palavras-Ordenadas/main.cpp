#include <vector>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    int c; cin >> c;
    while(c--){
        string s; cin >> s;
        bool validate = true;
        char anterior, atual;
        for(int i = 0; i < s.size(); i++){
            atual = tolower(s[i]);
            if(i == 0){
                anterior = atual;
            }else{
                if(anterior >= atual){
                    validate = false;
                    break;;
                }
                anterior = atual;
            }
        }
        cout << s << ": ";
        if(s.size() == 1 || validate == true){
            cout << "O" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    return 0;
}
//PALAVRMG - Palavras Ordenadas
//https://br.spoj.com/problems/PALAVRMG/