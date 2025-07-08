#include <iostream>
#include <cmath>
#include <climits>



using namespace std;

int main() {
    int x,y, xmax = INT_MIN, xmin = INT_MAX; 
    for(int i = 0; i<4; i++){
        cin >> x >> y;
        if(x < xmin){
            xmin = x;
        }
        if(x > xmax){
            xmax = x;
        }
    }
    
    int resultuado = pow((xmax - xmin),2);
    cout << resultuado << endl;
    return 0;
}
