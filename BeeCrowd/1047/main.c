#include <stdio.h>
int main(){
    int hi, mi, hf, mf, tempohora, tempominuto;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    if (mi < mf){
        tempominuto = mf - mi;
    }
    else if(mf==mi)tempominuto=0;
    else{
        tempominuto = 60 - (mi - mf);
    }
    if (hi < hf){
        tempohora = hf - hi;
    }
    else if(hf==hi){
        if (tempominuto != 0 || mi == mf)tempohora = 24;
        else tempohora = 0;
    }
    else{
        tempohora = 24 - (hi-hf);
    }
    if (mi > mf){
        tempohora --;
    }
    if (tempohora == 24 && tempominuto > 0){
        tempohora = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora,tempominuto);  
    return 0;
}


//beecrowd | 1047
//https://judge.beecrowd.com/pt/problems/view/1047