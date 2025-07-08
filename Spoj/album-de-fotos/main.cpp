#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Xpagina, Ypagina;
    cin >> Xpagina >> Ypagina;
    int xprimeirafoto, yprimeirafoto;
    cin >> xprimeirafoto >> yprimeirafoto;
    int xsegundafoto, ysegundafoto;
    cin >> xsegundafoto >> ysegundafoto;

    bool ans = false;

    if (xprimeirafoto + xsegundafoto <= Xpagina && max(yprimeirafoto, ysegundafoto) <= Ypagina) {
        ans = true;
    } else if (yprimeirafoto + ysegundafoto <= Ypagina && max(xprimeirafoto, xsegundafoto) <= Xpagina) {
        ans = true;
    } else if (xprimeirafoto + ysegundafoto <= Xpagina && max(yprimeirafoto, xsegundafoto) <= Ypagina) {
        ans = true;
    } else if (yprimeirafoto + xsegundafoto <= Ypagina && max(xprimeirafoto, ysegundafoto) <= Xpagina) {
        ans = true;
    } else if (yprimeirafoto + xsegundafoto <= Xpagina && max(xprimeirafoto, ysegundafoto) <= Ypagina) {
        ans = true;
    } else if (xprimeirafoto + ysegundafoto <= Ypagina && max(yprimeirafoto, xsegundafoto) <= Xpagina) {
        ans = true;
    }

    if (ans) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}