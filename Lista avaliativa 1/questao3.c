#include<stdio.h>

int main(){
    int senha,confirmacao;

    scanf("%d",&senha);
    printf("senha cadastrada: %d \n",senha);

    

    while(confirmacao != senha){
    
    scanf("%d",&confirmacao);

    if(senha != senha){
        printf("senha invalida!\n");

    }else{
        printf("senha valida!\n");
    }

    }

    return 0;
}