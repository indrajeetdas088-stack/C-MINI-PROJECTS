#include <stdio.h>
#include <math.h>

int main() {

double num1 = 0.0;
char operator = '\0';

double num2 = 0.0;
double result = 0.0;

printf("----WELCOME TO MY SIMPLE CALCULATOR----\n");

printf("\nEnter your 1st number: "); 
scanf("%lf", &num1);

printf("Enter the operator (+, -, *, /, ^): ");
scanf(" %c", &operator);

printf("Enter your 2nd number: ");
scanf("%lf", &num2);





switch(operator) {
    case '+':
    result = num1 + num2;
    printf("Result: %.2lf", result);
    break;
    case '-':
    result = num1 - num2;
    printf("Result: %.2lf", result);
    break;
    case '*':
    result = num1 * num2;
    printf("Result: %.2lf", result);
    break;
    case '/':
    if(num2 == 0){
        printf("You cannot divide anything with zero\n"); 
    }
    else{
        result = num1 / num2;
        printf("Result: %.2lf", result);
    } 
    break;
    case '^':
    result = pow(num1, num2);
    printf("Result: %.2lf", result);
    break;

    default:
    printf("Please enter a valid operator (+, -, *, /, ^)\n");
    break;
}




    return 0;
}