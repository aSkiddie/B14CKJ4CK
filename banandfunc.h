#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define MAXLEN	256

void gotline(char *a, int MaxLen)
{
	int i,c;
	for(i = 0; (c=getchar()) != '\n' && i <= (MaxLen -1); i++)
		*a++ = c;

	if (c == '\n')
		*a++ = c;
	*a = '\0';
}


void shuffle(int *deck)
{
	int left[13];
	int right[13];
	int x;

	for (x = 0; x < 13; x++)
	{
		left[x] = *(deck+x);
		right[x] = *(deck+13+x);
	}

	for (x=0; x < 13; x++)
	{
		*(deck+(x*2)) = left[x];
		*(deck+(x*2)+1) = right[x];
	}
}

void Banner()
{
	printf(" =============\n");
	printf("|             |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|  BLACKJACK  |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|             |\n");
	printf(" =============`\n");
}

void Ace()
{
	printf(" =============\n");
	printf("| A           |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     ACE     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            A|\n");
	printf(" =============`\n");
}

void King()
{
	printf(" =============\n");
	printf("|K            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     KING    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            K|\n");
	printf(" =============`\n");
}

void Queen()
{
	printf(" =============\n");
	printf("| Q           |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    QUEEN    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            Q|\n");
	printf(" =============`\n");
}

void Jack()
{
	printf(" =============\n");
	printf("|J            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    JACK     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            J|\n");
	printf(" =============`\n");
}

void Ten()
{
	printf(" =============\n");
	printf("| 10          |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     TEN     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|           10|\n");
	printf(" =============`\n");
}

void Nine()
{
	printf(" =============\n");
	printf("|9            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     NINE    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            9|\n");
	printf(" =============`\n");
}

void Eight()
{
	printf(" =============\n");
	printf("| 8           |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    EIGHT    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            8|\n");
	printf(" =============`\n");
}

void Seven()
{
	printf(" =============\n");
	printf("|7            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    SEVEN    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            7|\n");
	printf(" =============`\n");
}

void Six()
{
	printf(" =============\n");
	printf("|6            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     SIX     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            6|\n");
	printf(" =============`\n");
}

void Five()
{
	printf(" =============\n");
	printf("|5            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    FIVE     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            5|\n");
	printf(" =============`\n");
}

void Four()
{
	printf(" =============\n");
	printf("|4            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    Four     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            4|\n");
	printf(" =============`\n");
}

void Three()
{
	printf(" =============\n");
	printf("|3            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|    Three    |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            3|\n");
	printf(" =============`\n");
}

void Two()
{
	printf(" =============\n");
	printf("|2            |\n");
	printf("|_____________|\n");
	printf("|             |\n");
	printf("|             |\n");
	printf("|     TWO     |\n");
	printf("|	      |\n");
	printf("|_____________|\n");
	printf("|	      |\n");
	printf("|            2|\n");
	printf(" =============`\n");
}














