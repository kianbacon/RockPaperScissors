#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printChoices(char player, char computer)
{
	printf("\nYou chose: ");

	if (player == 'r')
		printf("rock\n\n");
	else if (player == 'p')
		printf("paper\n\n");
	else
		printf("scissors\n\n");

	printf("The computer chose: ");

	if (computer == 'r')
		printf("rock\n\n");
	else if (computer == 'p')
		printf("paper\n\n");
	else
		printf("scissors\n\n");
}

int compareChoices(char player, char computer)
{
	printChoices(player, computer);

	if (player == computer)
		return 0;

	if (player == 'r')
	{
		if (computer == 'p')
			return -1;
		else
			return 1;
	}
	else if (player == 'p')
	{
		if (computer == 'r')
			return 1;
		else
			return -1;
	}
	else
	{
		if (computer == 'r')
			return -1;
		else
			return 1;
	}
}

int main(void)
{
	int n, result;
	char player, computer;

	srand(time(NULL));
	n = rand() % 100;

	if (n < 33)
		computer == 'r';
	else if (n < 66)
		computer == 'p';
	else
		computer == 's';

	printf("Welcome to Rock Paper Scissors!\nCoded in C, by Kian Bacon\n");
	printf("\nPlease enter your choice as follows:\n\n");
	printf("\tROCK - r\n");
	printf("\tPAPER - p\n");
	printf("\tSCISSORS - s\n\n");

	scanf("%c", &player);
	result = compareChoices(player, computer);

	if (result == 0)
		printf("It's a draw!\n");
	else if (result == -1)
	{
		printf("  N\n　   O\n　　　 O\n　　　　 o\n　　　　　o\n　　　　　 o\n　　　　　o\n　　　　 。\n　　　 。\n　　　.\n　　　.\n　　　 .\n　　　　.\n");
		printf("You lost :(\n");
	}
	else
	{
		printf("       .''.      .        *''*    :_\\/_:     .\n      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n  '..'  ':::'     * /\\ *     .'/.\\'.   '\n      *            *..*         :\n     *\n        *\n");
		printf("WOOO! You won!\n");
	}

	return 0;
}
