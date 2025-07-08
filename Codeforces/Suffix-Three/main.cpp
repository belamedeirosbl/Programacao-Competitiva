#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i =0; i < n; i++){
        string frase;
        cin >> frase;
    if(frase.back() == 'o'){
            cout << "FILIPINO";
        }else if(frase.back() == 'u'){
            cout << "JAPANESE";
        }else if(frase.back() == 'a'){
            cout << "KOREAN";
        }
        cout << endl;
   }
 
    return 0;
}

//A. Suffix Three
//https://codeforces.com/contest/1281/problem/A
