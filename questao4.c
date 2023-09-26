#include<stdio.h>

int main(){

    char letra;
    float n,somaporcento;

    scanf("%c",&letra);
    scanf("%f",&n);

    switch(letra){
    case 'a':
        somaporcento = ((n * 5) /100) + n;
        printf("R$ %.2f\n",somaporcento);
    break;

    case 'b':
        somaporcento = ((n*7)/100) + n;
        printf("R$ %.2f\n",somaporcento);
    break;

    case 'c':
        somaporcento = ((n*8) / 100) + n;
        printf("R$ %.2f\n",somaporcento);
    break;

    default:
    break;
    }
    

    return 0;
}