#include <stdio.h>
#include <stdlib.h>




int main() {

    int nota1,nota2,resultado;
    printf("Insira a primeira nota: ");
    scanf("%d",&nota1);
    printf("Insira a segunda nota: ");
    scanf("%d",&nota2);

    resultado = ((nota1*2)+(nota2*3))/ 5;
    printf("Sua media foi: %d \n",resultado);
    system("PAUSE");


    return 0;
}
