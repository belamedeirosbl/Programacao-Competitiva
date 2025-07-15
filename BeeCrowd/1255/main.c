#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int testcase;
    int letras[26];
    char texto[201];

    scanf("%d\n", &testcase);
    for(int teste = 0; teste < testcase; teste++){

        fgets(texto, sizeof(texto), stdin);
        
        memset(letras, 0, sizeof(letras));
        int tamanho = strlen(texto);
        
        for(int i = 0; i < tamanho; i++){
            if(isalpha(texto[i])){
                letras[tolower(texto[i]) - 'a'] ++;
            }
        }
        int maior = 0;
        for(int i = 0; i < 26; i++){
            if (letras[i] > maior){
                maior = letras[i];
            }
        }
        for(int i = 0; i < 26; i++){
            if (letras[i] == maior){
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
    return 0;
}

//beecrowd | 1255
//https://judge.beecrowd.com/pt/problems/view/1255