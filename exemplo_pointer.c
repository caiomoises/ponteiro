#include <stdio.h>

void incrementa(int *numero){
    (*numero)++;
}

int main(void){
    int numero_teste = 5;
    incrementa(&numero_teste);
    printf("%i", numero_teste);
}

//distancia entre dois pontos.
#include <stdio.h>
#include <math.h>

void calcula_distancia(float *distancia, float x1, float y1, float x2, float y2){
    *distancia = sqrt(pow(y2-y1, 2) + pow(x2-x1, 2));
}

int main(void){
    float x1, x2, y1, y2;
    float dist;
    printf("insira os valores para as variaveis, x1, x2, y1 e y2, respectivamente: ");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    calcula_distancia(&dist, x1, y1, x2, y2); 
    printf("%f", dist);
    return 0;
}

#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x, y);
}

int main(){
    int resultado = calcula(5, 3, multiplicacao);
    printf("Resultado: %d", resultado);
    return 0;
}
