void printResults(const char* computerChoice, const char* humanChoice)
{
    //strcmp() is used for string comparisons
    if (strcmp(computerChoice, humanChoice) == 0)
    {
        printf("It's a draw");
    }
    else if  ((strcmp(humanChoice, "stone") == 0 && strcmp(computerChoice, "scissors") == 0) ||
             (strcmp(humanChoice, "paper") == 0 && strcmp(computerChoice, "stone") == 0) ||
             (strcmp(humanChoice, "scissors") == 0 && strcmp(computerChoice, "paper") == 0))
    {
        printf("You win\n");
    }
    else
    {
        printf("The computer has won\n");
    }
}

int main()
{
    srand(time(NULL));
    const char* computerChoice = getComputerChoice();
    const char* humanChoice = getHumanChoice();

    while(strcmp(humanChoice, "invalid") == 0)
    {
        printf("Invalid choice. Please enter a valid option.\n");
        humanChoice = getHumanChoice();
    }

    printResults(computerChoice, humanChoice);

    return 0;
}
