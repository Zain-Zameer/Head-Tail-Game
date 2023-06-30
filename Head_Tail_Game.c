#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include<unistd.h>


int main() {

    // Set the seed for the random number generator
    srand(time(NULL));

    // Generate a random index within the valid range
    int randomBotNumber = rand() % 5 + 1;
    int repeat = 1;
    int randomPlayerNumber;
    char pick[20];

    printf("----------------------------------\n");
    printf("Welcome to Head-Tail Game\n");
    printf("----------------------------------\n");

    while(repeat){
        printf("\n");
        printf("Bot: Hey what you want to pick ?\n");
        printf("Bot: Head Or Tail\n");
        printf("You: ");
        scanf("%s",&pick);
        if(strcmp(pick, "head") == 0 || strcmp(pick, "HEAD") == 0 || strcmp(pick, "Head") == 0){
            printf("Bot: Ok, So it means i have to pick Tail :)\n");
            printf("Bot: Now we have to throw random numbers between 1-5 instantly.\n");
            printf("\n");
            printf("You: ");
            scanf("%d",&randomPlayerNumber);
            printf("Bot: %d\n",randomBotNumber);
            printf("\n");
            if(randomPlayerNumber == 1 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You won, I lose :(");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won :) Hurrahhhh!!");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 1){
                printf("Bot: Head");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Wonnnn!!!!");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won Bruhhhhhh.");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won hoooo hoooooo!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won, aaaaaaaaaaaaaaaaaa! :(");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won Bruhhhhhh.");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won :) Hurrahhhh!!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won hoooo hoooooo!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to cry in a corner.");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won :) Hurrahhhh!!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won Bruhhhhhh.");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won hoooo hoooooo!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to cry in a corner.");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Die from happiness:)");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won Bruhhhhhh.");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won hoooo hoooooo!");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Die from happiness:)");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to cry in a corner.");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You WON!! :( :(");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I won hoooo hoooooo!");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to cry in a corner.");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Die from happiness:)");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Die from happiness:)");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to Cry BRAHHHHH");
                break;
            }
            else if(randomPlayerNumber>5){
                printf("Note: Enter Number between 1-5 only.\n");
                printf("Game Restarting..");
                printf("\n");
                sleep(1);
                continue;
            }
        }
        else if (strcmp(pick, "tail") == 0 || strcmp(pick, "TAIL") == 0 || strcmp(pick, "Tail") == 0){
            printf("Bot: Ok Boss, I have to pick Head!\n");
            printf("Bot: Now we have to throw random numbers between 1-5 instantly.\n");
            printf("\n");
            printf("You: ");
            scanf("%d",&randomPlayerNumber);
            printf("Bot: %d\n",randomBotNumber);
            printf("\n");
            if(randomPlayerNumber == 1 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I won, YOU lose :)");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You won :( aaaaaaaaaaaa!");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 1){
                printf("Bot: Head");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Wonn!! hmmmm");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won hehehe! #devil laugh");
                break;
            }
            else if(randomPlayerNumber == 1 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You won! whyyyyyyy!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won, hoooo hoooo! :(");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won Bruhhh duhhh!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won :( huhh!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won!");
                break;
            }
            else if(randomPlayerNumber == 2 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Die from happiness!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won, Just Go and celebrate!!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won Broo yo yo!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won hmmmmmmmm!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: Iiiiii Won!!");
                break;
            }
            else if(randomPlayerNumber == 3 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: Why you always win bruhhhhh!!!!!");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: I Won Bruhhhhhh.");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won hawwww hawwww!");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: You Won!! Now Im going to Jump from balcony.");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: Eye Won!!!!");
                break;
            }
            else if(randomPlayerNumber == 4 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: Ehmmm! WINNER WINNER CHICKEN DINNER!");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 1){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: HAWWWW HAWWWWW!");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 2){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: Ayiiiiiii! WIN WIN");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 3){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: YOUUU YOUUUU WON UUUUU STUPID!");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 5){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail.");
                sleep(1);
                printf("\nBot: I Won!! Now Im going to Jump in a empty tub");
                break;
            }
            else if(randomPlayerNumber == 5 && randomBotNumber == 4){
                printf("Bot: Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head,");
                sleep(1);
                printf("Tail,");
                sleep(1);
                printf("Head.");
                sleep(1);
                printf("\nBot: AYIIIIIIII PARA DA NU BAILOOO I WONNN!");
                break;
            }
            else if(randomPlayerNumber>5){
                printf("Note: Enter Number between 1-5 only.\n");
                printf("Game Restarting..");
                printf("\n");
                sleep(1);
                continue;
            }
        }
        else{
            printf("Select Between Head and Tail Only..\n");
            printf("\n");
            continue;
        }
        
    }


    return 0;
}
