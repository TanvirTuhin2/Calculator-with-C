#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char chr;
    double a, b;
    while (1){
        printf("\tEnter an operator (+, -, *, /, %) or q to exit : ");
        scanf(" %c", &chr);
        if (chr == 'q')
            exit(0);
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);
        switch (chr){
            case '+':
                printf("Result: %.lf + %.lf = %.lf\n\n\n\n\n\n", a, b, a + b);
                break;
            case '-':
                printf("Result: %.lf - %.lf = %.lf\n\n\n\n\n", a, b, a - b);
                break;
            case '*':
                printf("Result: %.lf * %.lf = %.lf\n\n\n\n\n", a, b, a * b);
                break;
            case '/':
                printf("Result: %.2lf / %.2lf = %.2lf\n\n\n\n\n", a, b, a / b);
                break;
            case '%':
                printf("Result: %lf %% %lf = %lf\n\n\n\n\n", a, b, fmod(a, b));
                break; 
            default:
                printf("Error! Invalid operator! Please enter a valid operator!\n");
        }
        // Clearing input buffer
        while (getchar() != '\n');
    }
    return 0;
}
