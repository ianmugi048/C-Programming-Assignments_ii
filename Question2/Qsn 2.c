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

        scanf("%c",&choice);
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

