/*to make a number guessing game...
a. Generate a random number (1-99)
b. user can guess the number.
c. show if the guessed number is greater or smaller than the actual number
d. give 10 chances to guess.*/
#include <stdio.h>
#include <stdlib.h>
// to gen erate a random number
/*int random(int min, int max)
{
    int num = rand() % (max - min + 1) + min;
    //  printf("The random number is %d\n", num);
    return num;
}*/
// to check if the user guessed the number
int check_guess(int guess, int actual)
{
    if (guess == actual)
    {
        return 1;
    }
    else
        return 0;
}
void main()
{
    int  guess, chances = 10, check;
   
    printf("Guess the number between 1 and 99\n");
// int random = rand() % (99 - 1 + 1) + 1;
    while (chances > 0)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
         int random = rand() % (99 - 1 + 1) + 1;
        printf("The random number is %d\n", random);
        check = check_guess(guess,random);
        if (check == 1)
        {
            printf("You guessed the number correctly\n");
            break;
        }
        else
        {
            printf("You guessed the number incorrectly\n");
            chances--;
        }
    }
    if (chances == 0)
    {
        printf("You have used all your chances\n");
    }
}
