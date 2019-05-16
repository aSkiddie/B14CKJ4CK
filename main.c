#include "banandfunc.h"

#define Ace 12
#define King 11
#define Queen 10
#define Jack 9
#define Ten 8
#define Nine 7
#define Eight 6
#define Seven 5
#define Six 4
#define Five 3
#define Four 2
#define Three 1
#define Two 0

#define TWO 13
#define THREE 14
#define FOUR 15
#define FIVE 16
#define SIX 17
#define SEVEN 18
#define EIGHT 19
#define NINE 20
#define TEN 21
#define JACK 22
#define QUEEN 23
#define KING 24
#define ACE 25




int main(int argc, char **argv)
{
	
	int cards[26];	

	Banner();
	sleep(2);
	

	for(int i = 0; i <= 25; i++)
		cards[i] = i;
	
	shuffle(cards);

	printf("%d\n",cards[5]);

	return 0;
}
