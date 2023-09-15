#include<stdio.h>

int xo(int ano){
 int xo;
    for(xo = 1896 ,xo <= 2022, xo = xo + 4){
  }
  return xo;
}
int xc(int ano2){
    int xc;
    for(xc = 1930 ,xc <= 2022,xc = xc +4){
        if(ano2  ){

        }
    }
    return xc;
}

int main(){

    int X;
    scanf("%d",&X);
    if(xo(X) && xc(X)){
    printf("sss");
    }else if(X == xc()){
    printf("sss");

    }else if(X == xo()){
        printf("Os jogos Olimpicos de verao ocorreram no ano de %d",X);

    }
    


    return 0;
}