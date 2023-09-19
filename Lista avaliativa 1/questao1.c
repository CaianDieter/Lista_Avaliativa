#include<stdio.h>

int copa(int xc){
    for(xc = 1930;xc <= 2022;xc = xc +4){
        printf(" ");
    }
    return xc;
}
int olim(int xo){
    for(xo = 1896;xo <= 2022;xo = xo +4){
        printf(" ");
    }
    return xo;
}


int main(){
    int ano;
    scanf("%d",&ano);

    int anocopa = copa(ano); 
    int anoolim = olim(ano);
      
    if(anocopa = ano){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d",ano);

    }else if(anoolim = ano){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d",ano);

    }else if(anocopa != ano && anoolim != ano){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d",ano);
    }
    
    return 0;
}