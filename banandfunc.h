#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define MAXLEN	256


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
#define ACED 13
#define KINGD 14
#define QUEEND 15
#define JACKD 16
#define TEND 17
#define NINED 18
#define EIGHTD 19
#define SEVEND 20
#define SIXD 21
#define FIVED 22
#define FOURD 23
#define THREED 24
#define TWOD 25
#define TWOS 26
#define THREES 27
#define FOURS 28
#define FIVES 29
#define SIXS 30
#define SEVENS 31
#define EIGHTS 32
#define NINES 33
#define TENS 34
#define JACKS 35
#define QUEENS 36
#define KINGS 37
#define ACES 38
#define ACEH 39
#define KINGH 40
#define QUEENH 41
#define JACKH 42
#define TENH 43
#define NINEH 44
#define EIGHTH 45
#define SEVENH 46
#define SIXH 47
#define FIVEH 48
#define FOURH 49
#define THREEH 50
#define TWOH 51

struct stats {
	char type[6];
	int card[5];
	int score;
};

struct stats Dealer;
struct stats Player;

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
	printf("----------------\n");
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

void divider() {
	printf("===============\n");
}

void FirstDeal(int *cards, int flag, int i, int count)
{

for(i; i <= count; i++, flag++)
		switch(cards[i]) {

		case ACE:
		if (flag != 2)
			Ace();
			if(flag == 2) {
				Banner();
			}
			break;
		case KING:
		if (flag != 2)
			King();
			if(flag == 2) {
				Banner();
			}
			break;
		case QUEEN:
		if (flag != 2)
			Queen();
			if(flag == 2) {
				Banner();
			}
			break;
		case JACK:
		if (flag != 2)
			Jack();
			if(flag == 2) {
				Banner();
			}
			break;
		case TEN:
		if (flag != 2)
			Ten();
			if(flag == 2) {
				Banner();
			}
			break;
		case NINE:
		if (flag != 2)
			Nine();
			if(flag == 2) {
				Banner();
			}
			break;
		case EIGHT:
		if (flag != 2)
			Eight();
			if(flag == 2) {
				Banner();
			}
			break;
		case SEVEN:
		if (flag != 2)
			Seven();
			if(flag == 2) {
				Banner();
			}
			break;
		case SIX:
		if (flag != 2)
			Six();
			if(flag == 2) {
				Banner();
			}
			break;
		case FIVE:
		if (flag != 2)
			Five();
			if(flag == 2) {
				Banner();
			}
			break;
		case FOUR:
		if (flag != 2)
			Four();
			if(flag == 2) {
				Banner();
			}
			break;
		case THREE:
		if (flag != 2)
			Three();
			if(flag == 2) {
				Banner();
			}
			break;
		case TWO:
		if (flag != 2)
			Two();
			if(flag == 2) {
				Banner();
			}
			break;
			case ACES:
			if (flag != 2)
				Ace();
				if(flag == 2) {
					Banner();
				}
				break;
			case KINGS:
			if (flag != 2)
				King();
				if(flag == 2) {
					Banner();
				}
				break;
			case QUEENS:
			if (flag != 2)
				Queen();
				if(flag == 2) {
					Banner();
				}
				break;
			case JACKS:
			if (flag != 2)
				Jack();
				if(flag == 2) {
					Banner();
				}
				break;
			case TENS:
			if (flag != 2)
				Ten();
				if(flag == 2) {
					Banner();
				}
				break;
			case NINES:
			if (flag != 2)
				Nine();
				if(flag == 2) {
					Banner();
				}
				break;
			case EIGHTS:
			if (flag != 2)
				Eight();
				if(flag == 2) {
					Banner();
				}
				break;
			case SEVENS:
			if (flag != 2)
				Seven();
				if(flag == 2) {
					Banner();
				}
				break;
			case SIXS:
			if (flag != 2)
				Six();
				if(flag == 2) {
					Banner();
				}
				break;
			case FIVES:
			if (flag != 2)
				Five();
				if(flag == 2) {
					Banner();
				}
				break;
			case FOURS:
			if (flag != 2)
				Four();
				if(flag == 2) {
					Banner();
				}
				break;
			case THREES:
			if (flag != 2)
				Three();
				if(flag == 2) {
					Banner();
				}
				break;
			case TWOS:
			if (flag != 2)
				Two();
				if(flag == 2) {
					Banner();
				}
				break;
				case ACEH:
				if (flag != 2)
					Ace();
					if(flag == 2) {
						Banner();
					}
					break;
				case KINGH:
				if (flag != 2)
					King();
					if(flag == 2) {
						Banner();
					}
					break;
				case QUEENH:
				if (flag != 2)
					Queen();
					if(flag == 2) {
						Banner();
					}
					break;
				case JACKH:
				if (flag != 2)
					Jack();
					if(flag == 2) {
						Banner();
					}
					break;
				case TENH:
				if (flag != 2)
					Ten();
					if(flag == 2) {
						Banner();
					}
					break;
				case NINEH:
				if (flag != 2)
					Nine();
					if(flag == 2) {
						Banner();
					}
					break;
				case EIGHTH:
				if (flag != 2)
					Eight();
					if(flag == 2) {
						Banner();
					}
					break;
				case SEVENH:
				if (flag != 2)
					Seven();
					if(flag == 2) {
						Banner();
					}
					break;
				case SIXH:
				if (flag != 2)
					Six();
					if(flag == 2) {
						Banner();
					}
					break;
				case FIVEH:
				if (flag != 2)
					Five();
					if(flag == 2) {
						Banner();
					}
					break;
				case FOURH:
				if (flag != 2)
					Four();
					if(flag == 2) {
						Banner();
					}
					break;
				case THREEH:
				if (flag != 2)
					Three();
					if(flag == 2) {
						Banner();
					}
					break;
				case TWOH:
				if (flag != 2)
					Two();
					if(flag == 2) {
						Banner();
					}
					break;
					case ACED:
					if (flag != 2)
						Ace();
						if(flag == 2) {
							Banner();
						}
						break;
					case KINGD:
					if (flag != 2)
						King();
						if(flag == 2) {
							Banner();
						}
						break;
					case QUEEND:
					if (flag != 2)
						Queen();
						if(flag == 2) {
							Banner();
						}
						break;
					case JACKD:
					if (flag != 2)
						Jack();
						if(flag == 2) {
							Banner();
						}
						break;
					case TEND:
					if (flag != 2)
						Ten();
						if(flag == 2) {
							Banner();
						}
						break;
					case NINED:
					if (flag != 2)
						Nine();
						if(flag == 2) {
							Banner();
						}
						break;
					case EIGHTD:
					if (flag != 2)
						Eight();
						if(flag == 2) {
							Banner();
						}
						break;
					case SEVEND:
					if (flag != 2)
						Seven();
						if(flag == 2) {
							Banner();
						}
						break;
					case SIXD:
					if (flag != 2)
						Six();
						if(flag == 2) {
							Banner();
						}
						break;
					case FIVED:
					if (flag != 2)
						Five();
						if(flag == 2) {
							Banner();
						}
						break;
					case FOURD:
					if (flag != 2)
						Four();
						if(flag == 2) {
							Banner();
						}
						break;
					case THREED:
					if (flag != 2)
						Three();
						if(flag == 2) {
							Banner();
						}
						break;
					case TWOD:
					if (flag != 2)
						Two();
						if(flag == 2) {
							Banner();
						}
						break;
		}
}

int convertscore(int *cards, int score, int i, int count) {

for(i; i <= count; i++)
	switch(cards[i]) {
		case ACE:
			if(score <= 10)
				score += 11;
			else
				score += 1;
			break;
		case KING:
			score += 10;
			break;
		case QUEEN: //|| QUEEND || QUEENH || QUEENS:
			score += 10;
			break;
		case JACK: //|| JACKD || JACKH || JACKS:
			score += 10;
			break;
		case TEN: //|| TEND || TENH || TENS:
			score += 10;
			break;
		case NINE: //|| NINED || NINEH || NINES:
			score += 9;
			break;
		case EIGHT: // || EIGHTD || EIGHTH || EIGHTS:
			score += 8;
			break;
		case SEVEN:// || SEVEND || SEVENH || SEVENS:
			score += 7;
			break;
		case SIX:// || SIXD || SIXH || SIXS:
			score += 6;
			break;
		case FIVE: // || FIVED || FIVEH || FIVES:
			score += 5;
			break;
		case FOUR: // || FOURD || FOURH || FOURS:
			score += 4;
			break;
		case THREE: //|| THREED || THREEH || THREES:
			score += 3;
			break;
		case TWO:// || TWOD || TWOH || TWOS:
			score += 2;
			break;
			case ACED:
				if(score <= 10)
					score += 11;
				else
					score += 1;
				break;
			case KINGD:
				score += 10;
				break;
			case QUEEND: //|| QUEEND || QUEENH || QUEENS:
				score += 10;
				break;
			case JACKD: //|| JACKD || JACKH || JACKS:
				score += 10;
				break;
			case TEND: //|| TEND || TENH || TENS:
				score += 10;
				break;
			case NINED: //|| NINED || NINEH || NINES:
				score += 9;
				break;
			case EIGHTD: // || EIGHTD || EIGHTH || EIGHTS:
				score += 8;
				break;
			case SEVEND:// || SEVEND || SEVENH || SEVENS:
				score += 7;
				break;
			case SIXD:// || SIXD || SIXH || SIXS:
				score += 6;
				break;
			case FIVED: // || FIVED || FIVEH || FIVES:
				score += 5;
				break;
			case FOURD: // || FOURD || FOURH || FOURS:
				score += 4;
				break;
			case THREED: //|| THREED || THREEH || THREES:
				score += 3;
				break;
			case TWOD:// || TWOD || TWOH || TWOS:
				score += 2;
				break;
				case ACEH:
					if(score <= 10)
						score += 11;
					else
						score += 1;
					break;
				case KINGH:
					score += 10;
					break;
				case QUEENH: //|| QUEEND || QUEENH || QUEENS:
					score += 10;
					break;
				case JACKH: //|| JACKD || JACKH || JACKS:
					score += 10;
					break;
				case TENH: //|| TEND || TENH || TENS:
					score += 10;
					break;
				case NINEH: //|| NINED || NINEH || NINES:
					score += 9;
					break;
				case EIGHTH: // || EIGHTD || EIGHTH || EIGHTS:
					score += 8;
					break;
				case SEVENH:// || SEVEND || SEVENH || SEVENS:
					score += 7;
					break;
				case SIXH:// || SIXD || SIXH || SIXS:
					score += 6;
					break;
				case FIVEH: // || FIVED || FIVEH || FIVES:
					score += 5;
					break;
				case FOURH: // || FOURD || FOURH || FOURS:
					score += 4;
					break;
				case THREEH: //|| THREED || THREEH || THREES:
					score += 3;
					break;
				case TWOH:// || TWOD || TWOH || TWOS:
					score += 2;
					break;
					case ACES:
						if(score <= 10)
							score += 11;
						else
							score += 1;
						break;
					case KINGS:
						score += 10;
						break;
					case QUEENS: //|| QUEEND || QUEENH || QUEENS:
						score += 10;
						break;
					case JACKS: //|| JACKD || JACKH || JACKS:
						score += 10;
						break;
					case TENS: //|| TEND || TENH || TENS:
						score += 10;
						break;
					case NINES: //|| NINED || NINEH || NINES:
						score += 9;
						break;
					case EIGHTS: // || EIGHTD || EIGHTH || EIGHTS:
						score += 8;
						break;
					case SEVENS:// || SEVEND || SEVENH || SEVENS:
						score += 7;
						break;
					case SIXS:// || SIXD || SIXH || SIXS:
						score += 6;
						break;
					case FIVES: // || FIVED || FIVEH || FIVES:
						score += 5;
						break;
					case FOURS: // || FOURD || FOURH || FOURS:
						score += 4;
						break;
					case THREES: //|| THREED || THREEH || THREES:
						score += 3;
						break;
					case TWOS:// || TWOD || TWOH || TWOS:
						score += 2;
						break;
		}
		return score;
}
