#include <stdio.h>
#include <string.h>

int main() {
    char matring[4][82];
    for (int i = 0; i < 4; i++) {
        scanf("%s", matring[i]);
    }

    int num = strlen(matring[0]) - 2;

    int inteiroF = 0;
    int inteiroL = 0;

    for (int getFL = 0; getFL < 4; getFL++) {
        inteiroF = inteiroF * 10 + (matring[getFL][0] - '0');
        inteiroL = inteiroL * 10 + (matring[getFL][num + 1] - '0');
    }

    int resposta[num];

    for (int i = 1; i <= num; i++) {
        char M[4];
        for (int posic = 0; posic < 4; posic++) {
            M[posic] = matring[posic][i];
        }

        int letra = 0;

        for (int trasfnum = 0; trasfnum < 4; trasfnum++) {
            letra = letra * 10 + (M[trasfnum] - '0');
        }

    resposta[i - 1] = ((inteiroF * letra) + inteiroL) % 257;
    }

    for (int i = 0; i < num; i++) {
        
        char x = resposta[i];
        printf("%c", resposta[i]);
    }
    printf("\n");

    return 0;
}

//beecrowd | 1803 | [PJ][P1]
//https://judge.beecrowd.com/pt/problems/view/1803