// Created by Miguel Lamazares on 04/29/2025

/* IMPORTING REQUIRED LIBRARIES
1- stdio.h: For input and output functions
2- math.h: For mathematical functions
*/
#include <stdio.h>
#include <math.h>

int main() {
    double num_1, num_2, result; 
    int sim;
    char simbol;

    do {
        // Entradas
        printf("if you want a number with decimal places use '.'\nEnter the first number: ");
        scanf("%lf", &num_1);

        printf("What operation do you want to perform? (+, -, /, *, ^ or $)\n+ = Addition\n- = Subtraction\n* = Multiplication\n/ = Division\n^ = Power\n$ = Square Root\n");
        scanf(" %c", &simbol);  

        if (simbol != '$') {
            printf("Enter the second number: ");
            scanf("%lf", &num_2);
        }

        // Operações
        switch (simbol) {
           
            // ADIÇÃO
            case '+':
                result = num_1 + num_2;
                printf("Result: %.2lf\n", result);
                break;
            
            
                // SUBTRAÇÃO
            case '-':
                result = num_1 - num_2;
                printf("Result: %.2lf\n", result);
                break;
            
            
                // MULTIPLICAÇÃO
            case '*':
                result = num_1 * num_2;
                printf("Result: %.2lf\n", result);
                break;
            
            
                // POTENCIACIACÃO
            case '^':
                result = pow(num_1, num_2);
                printf("Result: %.2lf\n", result);
                break;
            
            
                // DIVISÃO
            case '/':
                if (num_2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    result = num_1 / num_2;
                    printf("Result: %.2lf\n", result);
                }
                break;
          
            
            
                // RAIZ QUADRADA
            case '$':
                if (num_1 < 0) {
                    printf("Error: Cannot calculate the square root of a negative number.\n");
                } else {
                    result = sqrt(num_1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            default:
                printf("Invalid operation.\n");
                break;
        }

        // Perguntar se deseja continuar
        printf("Thank you for using the calculator!\nDo you want to perform another operation?\n(1 for yes, 0 for no): ");
        scanf(" %d", &sim);
    } while (sim == 1);
    return 0;
}
