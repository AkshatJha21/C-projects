#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number();
int guess(int, int);

int main()
{
    printf("GUESS THE NUMBER\n\n");
    printf("To start playing, enter (y).\nTo exit the game, enter (n).\n");
    char menu;
    scanf("%c", &menu);
    switch (menu)
    {
    case 'y':
        printf("Guess the number\n");
        int r = random_number();
        int guesses = 1;
        int g;
        printf("A random number between 1-100 has been generated.\nFind it within the least guesses possible.\n");
        do
        {
            printf("Guess:\n");
            scanf("%d", &g);
            if (g<r)
            {
                printf("Your guess is lower than the number.\n");
            }
            else if (g>r)
            {
                printf("Your guess is higher than the number.\n");
            }
            else if (g == r)
            {
                printf("Congratulations! You guessed it right in %d attempts.\nThe number was %d", guesses, g);
            }
            guesses++;
        } while (g != r);
        
        break;
    
    case 'n':
        printf("Exited");
        break;
    
    default:
        printf("Kindly enter a valid response!");
        break;
    }
    return(0);
}

int random_number(){
    int number;
    srand(time(0));
    number = rand()%100+1;
    return number;
}