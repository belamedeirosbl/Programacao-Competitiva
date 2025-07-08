#include <stdio.h>
int cont = 0;
int fibonacci(int numero){
    cont ++;
   if (numero == 1){
       return 1;
   }
   if (numero == 0){
       return 0;
   }
   return(fibonacci(numero-2) + fibonacci(numero-1));
}
int main(){
    int numero;
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++){
        cont = 0;
        scanf("%d", &numero);
        int resp = fibonacci(numero);
        cont --;
        printf("fib(%d) = %d calls = %d\n", numero, cont, resp);
    }
    return 0;
}

//beecrowd | 1029
//https://judge.beecrowd.com/pt/problems/view/1029