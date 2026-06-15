#include <stdio.h>

int main() {

int age = 0;
int isStudent = 0;

//The Rules:

//Children under 5: Free ($0)
//Kids/Teens (5 to 17): $8
//Adults (18 to 64): $12
//Senior Citizens (65+): $6

printf("----WELCOME TO OUR MOVIE THEATRE----\n");
printf("Please enter your age: ");
scanf("%d", &age);

if(age <= 0){
    printf("\nGET OUT OF HERE you are not born yet !! XD\n");
}
else if(age >= 65){
    printf("\nYour final amount will be $6\n");
}
else if(age >= 18){
    printf("\nAre you a student? (Enter 1 for Yes, 2 for No): \n");
    scanf("%d", &isStudent);
    if(isStudent == 1){
        printf("Your final amount will be $10");
    }
    else{
        printf("Your final amount will be $12"); 
    }
}
else if(age >= 5){
    printf("\nYour final amount will be $8\n");
}
else if(age < 5){
    printf("\nCongo you are eligible for a free movie ticket\n");
}

printf("\nEnjoy your movie !\n");

    return 0;
}