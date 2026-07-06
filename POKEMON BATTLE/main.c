#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int player1Health = 100;
    int player2Health = 100;
    int player1Action = 0;
    int player1PotionsLeft = 1;
    int player2Action = 0;
    int player2PotionsLeft = 3;
    int damage = 0;
    int heal = 20;

    printf("*** WELCOME TO THE KANTO POKEMON CHAMPIONS LEAGUE ***\n");
    printf("\nTHE PLAYER MUST FOLLOW RULES & REGULATIONS TO BECOME A CHAMP!\n");
    printf("\nPlayer 1 health is %d%\n", player1Health);
    printf("Player 2 Total health is %d\n", player2Health);
    printf("\nSTART!!\n");

    srand(time(NULL));

    while(player1Health > 0 && player2Health > 0){
        printf("\nPlayer 1, What would you like to do?(Press 1 to attack, Press 2 to Heal): ");
        scanf("%d", &player1Action);
        if(player1Action == 1){
            damage = (rand() % 15 + 10);          
           if(damage > 20){
                printf("CRITICAL HIT !! ");
            } 
            player2Health = player2Health - damage;
            printf("Player 1 dealt %d damage!\n", damage);
            printf("Player 2 remaining Health is %d", player2Health);
        }
        else if(player1Action == 2){
            if(player1PotionsLeft > 0){
            
            if(player1Health == 100){
                printf("You already have maximum health!\n");
            } 
            else {
                // 3. Apply the heal and reduce potion count
                player1Health = player1Health + heal;
                player1PotionsLeft--;
                
                // 4. THE CLAMP: If the heal pushed them over 100, force it back to 100
                if(player1Health > 100){
                    player1Health = 100;
                }
                
                printf("You restored health! Your current Health is %d\n", player1Health);
                printf("You currently have %d potions left\n", player1PotionsLeft);
            }
        }
        // 5. If they truly have no potions
        else {
            printf("You have 0 potions left!\n");
        }
        }

        if(player2Health <= 0) {
            break;
        }

        printf("\nPlayer 2, it's YOUR turn!(Press 1 to attack, Press 2 to Heal): ");
        scanf("%d", &player2Action);
        if(player2Action == 1){
            damage = (rand() % 15 + 10);
            if(damage > 20){
                printf("CRITICAL HIT !! ");
            } 
            player1Health = player1Health - damage;
            printf("Player 2 dealt %d damage!\n", damage);
            printf("Player 1 remaining Health is %d\n", player1Health);
        }
        else if(player2Action == 2){
            if(player2PotionsLeft > 0){
            
            if(player2Health == 100){
                printf("You already have maximum health!\n");
            } 
            else {
                // 3. Apply the heal and reduce potion count
                player2Health = player2Health + heal;
                player2PotionsLeft--;
                
                // 4. THE CLAMP: If the heal pushed them over 100, force it back to 100
                if(player2Health > 100){
                    player2Health = 100;
                }
                
                printf("You restored health! Your current Health is %d\n", player2Health);
                printf("You currently have %d potions left\n", player2PotionsLeft);
            }
        }
        // 5. If they truly have no potions
        else {
            printf("You have 0 potions left!\n");
        }
        }

        
    }

    if(player2Health <= 0){
        printf("\nCONGO!! PLAYER1, YOU ARE THE NEW POKEMON CHAMPION !! ");
    }
    else if(player1Health <= 0){
        printf("\nCONGO!! PLAYER2, YOU ARE THE NEW POKEMON CHAMPION !!");
    }

    return 0;

}

// Things to add - True critical hit
//               - Ultimate Move
//               - Type advantages
//               - The speed stat 