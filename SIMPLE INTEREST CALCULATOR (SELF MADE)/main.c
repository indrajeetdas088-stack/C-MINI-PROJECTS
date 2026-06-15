#include <stdio.h>
#include <math.h>

int main() {

double Principal = 0.0;
double Rate = 0.0;
int years = 0;
double Total = 0.0;

printf("----Simple Interest Calculator----\n");

printf("Enter the Principal: ");
scanf("%lf", &Principal);

printf("Enter the rate of Interest % : ");
scanf("%lf", &Rate);
Rate = Rate / 100;

printf("Enter the Time Period: ");
scanf("%d", &years);

Total = Principal * Rate * years;

printf("\nAfter %d years, The final amount will be $%.2lf", years, Total);


    return 0;
}