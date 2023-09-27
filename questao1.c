#include<stdio.h>

int copa(int anolido){
    int xc;
    for(xc = 1930;xc <= 2022;xc = xc +4){
        if(anolido == xc && xc != 1942&& xc != 1946){
            return 1;
        }
    }
    return -1;
}
int olim(int anolido2){
    int xo;
    for(xo = 1896;xo <= 2022;xo = xo +4){
        if(anolido2 == xo && xo != 1916 && xo != 1940 && xo != 1944){
            return 1;
        }
    }
    return -1;
}


int main(){
    int ano;
    scanf("%d",&ano);

    int anocopa = copa(ano);
    
    int anoolim = olim(ano);
    
    if(anocopa == 1){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",ano);

    }else if(anoolim == 1){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",ano);

    }else if(anocopa == -1 && anoolim == -1){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n",ano);
    }
    
    return 0;
}