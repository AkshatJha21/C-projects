#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//GAME FUNCTION:- USER VS COMPUTER
int game(char user, char comp)
{

    if (comp != user)
    {
        if (comp == 'r')
        {
            if (user == 'p')
            {
                printf("Paper wrapped the rock.\nYou won!");
            }
            else if (user == 's')
            {
                printf("Rock broke the scissors.\nYou lost!");
            }
        }
        else if (comp == 'p')
        {
            if (user == 'r')
            {
                printf("Paper wrapped the rock.\nYou lost!");
            }
            else if (user == 's')
            {
                printf("Scissors cut the paper.\nYou won!");
            }
        }
        else if (comp == 's')
        {
            if (user == 'r')
            {
                printf("Rock broke the scissors.\nYou won!");
            }
            else if (user == 'p')
            {
                printf("Scissors cut the paper.\nYou lost!");
            }
        }
    }
    else if (comp == user)
    {
        printf("Draw!");
    }
}

int main()
{   // GAME INITIATION:-
    char user, comp;
    printf("ROCK-PAPER-SCISSORS\n");

    //USER INPUT:-
    printf("Choose one:\nFor ROCK--->enter (r)\nFor PAPER--->enter (p)\nFor SCISSORS--->enter (s)\n");
    scanf("%c", &user);
    
    if (user == 'r')
    {
        printf("You chose: ROCK\n");
    }
    else if (user == 'p')
    {
        printf("You chose: PAPER\n");
    }
    else if (user == 's')
    {
        printf("You chose: SCISSORS\n");
    }
    else
    {
        printf("Invalid response!\n");
    }

    //TAKING RANDOM COMPUTER INPUT:-
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number <= 33)
    {
        comp = 'r';
        printf("PC chose: ROCK\n");
    }
    else if (number <= 66)
    {
        comp = 'p';
        printf("PC chose: PAPER\n");
    }
    else
    {
        comp = 's';
        printf("PC chose: SCISSORS\n");
    }

    //GAME RESULT VIA GAME FUNCTION:-
    game(user, comp);
    return (0);
}