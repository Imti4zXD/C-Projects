#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));


    printf("Welcome To the world of Guessing Games!");
    random = rand() % 100 + 1; //Generating random number between 1 to 100.



    do{
        printf("\nGuess a Number between 1 to 100: ");
        scanf("%d", &guess);
        no_of_guess++;

        if(guess<random){
            printf("Guess a larger number.");
        }
        else if(guess>random){
            printf("Guess a smaller number.");
        }
        else{
            printf("Congratulations!!! You have successfully guessed the Number in %d attempts.", no_of_guess);
        }

    }while(guess != random);

    printf("\nThanks for Playing.");
    printf("\nDeveloped by: Imtiaz Khan");

    return 0;
<<<<<<< HEAD

}
=======
}
>>>>>>> 70e867945db802b387504e507c39df195fcf5d92
