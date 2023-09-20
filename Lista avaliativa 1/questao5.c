#include<stdio.h>

int main(){
    int a,b,mult,m;

    scanf("%d %d",&a,&b);

    if(a == b){
        printf("Os valores lidos sao iguais\n");

    }else if(a > b){
        printf("%d eh maior que %d\n",a,b);

        for(m = 1;m <= 10;m++){
            mult = m * a;
         }
         if((mult % b) == 0){
            printf("%d eh multiplo de %d\n",a,b);
         }else{
            printf("%d nao eh multiplo de %d\n",a,b);
         }

    }else if(b > a){
        printf("%d eh maior que %d\n",b,a);
        
        for(m = 1;m <= 10;m++){
            mult = m * b;
         }
        if ((mult % a) == 0){
            printf("%d eh multiplo de %d\n",b,a);
        }else{
            printf("%d nao eh multiplo de %d\n",b,a);
        }
    }



    return 0;
}