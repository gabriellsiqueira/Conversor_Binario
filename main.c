#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    int sim_nao =10;
    while (sim_nao == 10){

    int num_decimal;
    int num_binario1, num_binario2, num_binario3,num_binario4;
    int num_binario5, num_binario6, num_binario7,num_binario8;
    printf("/Conversor de numeros decimais para binarios/ \n");
    printf("/Obs: Ate 8bits                             / \n");
    Sleep(2000);
    printf("Digite o numero que deseja transformar em binario: \n");
    scanf("%d",&num_decimal);

    num_binario1 = num_decimal %2;
    num_decimal = num_decimal /2;
    num_binario2 = num_decimal %2;
    num_decimal = num_decimal /2;
    num_binario3 = num_decimal %2;
    num_decimal = num_decimal/2;
    num_binario4 = num_decimal %2;
    num_decimal = num_decimal /2;
    num_binario5 = num_decimal %2;
    num_decimal = num_decimal /2;
    num_binario6 = num_decimal %2;
    num_decimal = num_decimal /2;
    num_binario7 = num_decimal %2;
    num_decimal = num_decimal/2;
    num_binario8 = num_decimal %2;
    num_decimal = num_decimal /2;
    printf("O n em binario eh: %d%d%d%d%d%d%d%d \n",num_binario8, num_binario7, num_binario6,num_binario5,
    num_binario4,num_binario3,num_binario2,num_binario1);


    printf("Deseja transformar outro numero? (10=sim/5=nao);");
    scanf("%d",&sim_nao);

    if (sim_nao == 10){
    printf("Continuar...\n");
    }
}

    printf("Encerrar...\n");
    return 0;
}


