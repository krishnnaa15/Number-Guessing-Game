/* We will write a program that generates a random number and ask the players to guess it.
 if the player guess is higher than the actual number the program displays "LOWER NUMBER PLEASE".
 similarly if the player guess is lower than the actual number the program displays "HIGHER
 NUMBER PLEASE". and when the player guess the correct number, the program displays the number of
 guesses the player used to arrive at the correct number. */

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 int main()
 {
     int number, guess, guesses=1;

     srand (time(0));
     number= rand()%100+1;

     // printf("The number is %d\n",number);

     do
     {
         printf("Guess the number between 1 to 100\n");
         scanf("%d",&guess);

         if(guess>number)
         {
             printf("Lower number please!\n");
         }

         else if(guess<number)
         {
             printf("Higher number please!\n");
         }

         else
         {
             printf("You guessed it in %d attempts\n",guesses);
         }

         guesses++;

     }while(guess!=number);

     return 0;
 }
