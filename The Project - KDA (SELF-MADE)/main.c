#include <stdio.h>
#include <math.h>

int main() {

int Kills = 0;
int Deaths = 0;
int Assists = 0;
double KDAratio = 0.0;

printf("----WELCOME TO KDA CALCULATOR----\n");

printf("\nEnter your Kills :");
scanf("%d", &Kills);

printf("Enter your Deaths :");
scanf("%d", &Deaths);

printf("Enter your Assists :");
scanf("%d", &Assists);

KDAratio = (double)(Kills + Assists) / Deaths;

printf("\nYour KDA ratio is: %.2lf\n", KDAratio);
printf("KEEP IT UP !!!"); 

    return 0;
}