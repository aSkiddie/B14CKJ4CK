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

void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void shuffle(int *arr, int n)
{
	srand ( time(NULL) );
	
	for (int i = n-1; i > 0; i--)
	{
		int j = rand() % (i+1);
		
		swap(&arr[i], &arr[j]);
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
	printf("_________________\n");
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
	for(int i = 0; i <= 1; i++)
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

void divider() {
	printf("===============\n");
}












