#include "banandfunc.h"

#define HIT 1

int main(int argc, char **argv)
{
	char *hit;
	int cards[52];
	//Banner();
	//sleep(2);


	for(int i = 0; i <= 51; i++)
		cards[i] = i;

	shuffle(cards, 52);

	FirstDeal(cards, 1, 0, 3);

	Dealer.score = convertscore(cards, Dealer.score, 0, 1);
	Player.score = convertscore(cards, Player.score, 2, 3);

	printf("YOUR SCORE: %d\n\n", Player.score);

	printf("Press 1 to hit or 2 to stay: ");
	gotline(hit, HIT);

	if(*hit == '1') {
		FirstDeal(cards, 0, 4, 4);
		printf("\n^^^YOUR CARD^^^\n\n");
		Player.score = convertscore(cards, Player.score, 4, 4);
			}


	FirstDeal(cards, 0, 1, 1);
	printf("\n^^^DEALER^^^^ (He Flpped His Second Card)\n\n");
	sleep(4);
	//printf("Dealer Score: %d\n\n", Dealer.score);
	//printf("Your Score: %d\n\n", Player.score);
	if (Dealer.score <= 14 || Player.score > Dealer.score && Dealer.score != 21 && Player.score < 21) {
		printf("\nDealer Takes a Card\n\n");
		FirstDeal(cards, 0, 5, 5);
		Dealer.score = convertscore(cards, Dealer.score, 5, 5);
		printf("\n Dealer Score: %d\n\n", Dealer.score);
		printf("\n Player Score: %d\n\n", Player.score);
	}

	printf("Press 1 to hit or 2 to stay: ");
	gotline(hit, HIT);

	if(*hit == '1') {
		FirstDeal(cards, 0, 4, 4);
		printf("\n^^^YOUR CARD^^^\n\n");
		Player.score = convertscore(cards, Player.score, 4, 4);
		sleep(4);
			}

			if (Dealer.score <= 14 || Player.score > Dealer.score && Dealer.score != 21 && Player.score < 21) {
				printf("\nDealer Takes a Card\n\n");
				FirstDeal(cards, 0, 5, 5);
				printf("\n^^^DEALER^^^^\n\n");
				Dealer.score = convertscore(cards, Dealer.score, 5, 5);
				printf("\n Dealer Score: %d\n\n", Dealer.score);
				printf("\n Player Score: %d\n\n", Player.score);
			}

			if (Dealer.score > Player.score && Dealer.score <= 21 || Player.score > 21) {
				printf("DEALER WON\n");
				printf("FINAL SCORE\n---------------\nPlayer: %d\nDealer: %d\n", Player.score, Dealer.score);
			}
			else if (Dealer.score < Player.score || Dealer.score > 21) {
				printf("PLAYER WON\n");
				printf("FINAL SCORE\n---------------\nPlayer: %d\nDealer: %d\n", Player.score, Dealer.score);
			}
			if (Dealer.score == Player.score) {
				printf("TIED\n");
				printf("FINAL SCORE\n---------------\nPlayer: %d\nDealer: %d\n", Player.score, Dealer.score);
			}










	return 0;
}
