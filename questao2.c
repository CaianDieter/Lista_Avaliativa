#include<stdio.h>


int main(){
    int n;
    int soma = 0;

    scanf("%d",&n);
    if(n % 2 == 0){
        printf("%d eh par\n",n);
    }else{
        printf("%d eh impar\n",n);
    }

   int seguraonaqui = n;

    while(n > 0){
        soma += n % 10;
        n /= 10;
    }
    printf("A soma dos algarismos de %d eh %d\n",seguraonaqui,soma);


    return 0;
}