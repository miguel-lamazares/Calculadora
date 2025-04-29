// Criado por Miguel Lamazares em 29/04/2025

/* IMPORTANDO BIBLIOTECAS NECESSÁRIAS
    1- stdio.h: Para funções de entrada e saída
    2- math.h: Para funções matemáticas
*/
#include <stdio.h>
#include <math.h>

int main() {
    double num_1, num_2, result; 
    int sim;
    char simbol;

    do {
        // Entradas
        printf("Digite o primeiro número: ");
        scanf("%lf", &num_1);

        printf("Qual operação deseja realizar? (+, -, /, *, ^ ou $)\n+ = Adicao\n- = Subtracao\n* = Multiplicacao\n/ = Divisao\n^ = Potenciacao\n$ = Raiz Quadrada\n");
        scanf(" %c", &simbol);  // Adicionando espaço para ignorar o \n no buffer

        if (simbol != '$') {
            printf("Digite o segundo número: ");
            scanf("%lf", &num_2);
        }

        // Operações
        switch (simbol) {
           
            // ADIÇÃO
            case '+':
                result = num_1 + num_2;
                printf("Resultado: %.2lf\n", result);
                break;
            
            
                // SUBTRAÇÃO
            case '-':
                result = num_1 - num_2;
                printf("Resultado: %.2lf\n", result);
                break;
            
            
                // MULTIPLICAÇÃO
            case '*':
                result = num_1 * num_2;
                printf("Resultado: %.2lf\n", result);
                break;
            
            
                // POTENCIACIACÃO
            case '^':
                result = pow(num_1, num_2);
                printf("Resultado: %.2lf\n", result);
                break;
            
            
                // DIVISÃO
            case '/':
                if (num_2 == 0) {
                    printf("Erro: Não é possível dividir por zero.\n");
                } else {
                    result = num_1 / num_2;
                    printf("Resultado: %.2lf\n", result);
                }
                break;
          
            
            
                // RAIZ QUADRADA
            case '$':
                if (num_1 < 0) {
                    printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
                } else {
                    result = sqrt(num_1);
                    printf("Resultado: %.2lf\n", result);
                }
                break;
            default:
                printf("Operação inválida.\n");
                break;
        }

        // Perguntar se deseja continuar
        printf("Deseja realizar outra operação? (1 para sim, 0 para não): ");
        scanf("%d", &sim);
    } while (sim == 1);

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}
