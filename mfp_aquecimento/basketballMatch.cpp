#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int cases; cin >> cases;
    string irr;
    int time;
    string ponto;
    int a = 0,b = 0;
    for(int i = 0; i < cases; i++){
        cin >> irr;
        cin >> time;
        cin >> ponto;
        if(time == 1){
            if(ponto == "+1"){
                a+=1;
            }
            else if(ponto == "+2"){
                a+=2;
            }
            else{
                a+=3;
            }
        }else{
            if(ponto == "+1"){
                b+=1;
            }
            else if(ponto == "+2"){
                b+=2;
            }
            else{
                b+=3;
            }
        }
    }
    cout << a << " x " << b << endl;
    return 0;
}
