#include "banandfunc.h"


#define TWO  0
#define THREE  1
#define FOUR  2
#define FIVE  3
#define SIX  4
#define SEVEN 5
#define EIGHT 6
#define NINE  7
#define TEN  8
#define JACK 9
#define QUEEN 10
#define KING 11
#define ACE 12

struct stats {
	char a[6];
	int card[12];
	int score;
};
	


int main(int argc, char **argv)
{
	
	int cards[13];	

	Banner();
	sleep(2);
	

	for(int i = 0; i <= 12; i++)
		cards[i] = i;
	
	shuffle(cards, 13);
	
		
	switch(cards[0]) {

		case ACE:
			Ace();
			Banner();
			break;
		case KING:
			King();
			Banner();
			break;
		case QUEEN:
			Queen();
			Banner();
			break;
		case JACK:
			Jack();
			Banner();
			break;
		case TEN:
			Ten();
			Banner();
			break;
		case NINE:
			Nine();
			Banner();
			break;
		case EIGHT:
			Eight();
			Banner();
			break;
		case SEVEN:
			Seven();
			Banner();
			break;
		case SIX:
			Six();
			Banner();
			break;
		case FIVE:
			Five();
			Banner();
			break;
		case FOUR:
			Four();
			Banner();
			break;
		case THREE:
			Three();
			Banner();
			break;
		case TWO:
			Two();
			Banner();
			break;
	}
	
	return 0;
}
