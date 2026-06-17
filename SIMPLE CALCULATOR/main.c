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

printf("Enter the operator (+, -, *, /, ^, s): ");
scanf(" %c", &operator);

if(operator != 's'){
    printf("Enter your second number: ");
    scanf("%lf", &num2);
}

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
    case 's':
    if(num1 < 0){
        printf("Error: Cannot calculate the square root a negative number\n");
    }
    else{
        result = sqrt(num1);
            printf("Result: %.2lf\n", result);
    }
    break;
    
    default:
    printf("Please enter a valid operator (+, -, *, /, ^, s)\n");
    break;

}
    return 0;
}