#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_computer_choice()
{
    int randomnum=rand()%3;//Generates 0,1 or 2
    if(randomnum==0)
    {
        return'S';
    }
    else if(randomnum==1)
    {
        return'K';
    }
    else
    {
        return'P';
    }

}
char get_player_choice()
{
    char choice;
    while(1)
    {
        printf("Enter your choice(S for stone,K for knife,P for paper...The choice should be in CAPS):");

        scanf(" %c",&choice);
        if(choice=='S'||choice=='K'||choice=='P')
        {
            break;

        }
        else
        {
            printf("invalid input.Please enter S,K,OR P.\n");
            continue;
        }
    }
    return choice;
}
void determineWinner(char playerChoice, char computerChoice) {
    if (playerChoice == computerChoice)
    {
        printf("It's a tie! Both chose %c.\n", playerChoice);
    }
    else if ((playerChoice == 'S' && computerChoice == 'K') ||
               (playerChoice == 'K' && computerChoice == 'P') ||
               (playerChoice == 'P' && computerChoice == 'S'))
    {
        printf("You win! %c beats %c.\n", playerChoice, computerChoice);
    }
    else
    {
        printf("Computer wins! %c beats %c.\n", computerChoice, playerChoice);
    }
}

int main()
{
    char playerChoice;
    char computerChoice;

    srand(time(0));

    computerChoice = get_computer_choice();
    playerChoice = get_player_choice();

    printf("You chose: %c\n", playerChoice);
    printf("Computer chose: %c\n", computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}

