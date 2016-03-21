/*
 * name: poker.c
 * purpose: 给一手牌分类
 * author: babes young
 */


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int num_in_rank[13];
int num_in_suit[4];
bool straight, flush, four, three;
int pairs;//can be 0, 1, 2

void read_cards();
void analyze_cards();
void print_result();

int main(void)
{
    for (;;) {
        read_cards();
        analyze_cards();
        print_result();
    }
    return 0;
}


void read_cards()
{
    bool card_exist[12][4] = {{false}};
    char rank_ch, suit_ch, ch;
    int index_rank, index_suit;
    bool bad_card;
    int card_in_hand = 0;

    for (int i = 0; i < 13; i++) {
        num_in_rank[i] = 0;
    }
    for (int i = 0; i < 4; i++) {
        num_in_suit[i] = 0;
    }

    while (card_in_hand < 5) {
        bad_card = false;
        printf("enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':
                printf("exit\n");
                exit(EXIT_SUCCESS);
            case '2':
                index_rank = 0;
                break;
            case '3':
                index_rank = 1;
                break;
            case '4':
                index_rank = 2;
                break;
            case '5':
                index_rank = 3;
                break;
            case '6':
                index_rank = 4;
                break;
            case '7':
                index_rank = 5;
                break;
            case '8':
                index_rank = 6;
                break;
            case '9':
                index_rank = 7;
                break;
            case 't': case 'T':
                index_rank = 8;
                break;
            case 'j': case 'J':
                index_rank = 9;
                break;
            case 'q': case 'Q':
                index_rank = 10;
                break;
            case 'k': case 'K':
                index_rank = 11;
                break;
            case 'a': case 'A':
                index_rank = 12;
                break;
            default:
                bad_card = true;
                break;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C':
                index_suit = 0;
                break;
            case 'd': case 'D':
                index_suit = 1;
                break;
            case 'h': case 'H':
                index_suit = 2;
                break;
            case 's': case 'S':
                index_suit = 3;
                break;
        }

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                bad_card = true;
            }
        }//去除return键的影响

        if (bad_card) {
            printf("bad card, ignored\n");
        } else if (card_exist[index_rank][index_suit]) {
            printf("duplicate card, ignored\n");
        } else {
            num_in_rank[index_rank]++;
            num_in_suit[index_suit]++;
            card_exist[index_rank][index_suit] = true;
            card_in_hand++;
        }
    }
}


void analyze_cards()
{
    int num_straight = 0;
    int index_rank;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /*check for flush*/
    for (int i = 0; i < 4; i++) {
        if (num_in_suit[i]  == 5) {
            flush = true;
        }
    }

    /*check for straight*/
    index_rank = 0;
    while (num_in_rank[index_rank] == 0) {
        index_rank++;
    }
    for (; index_rank < 13 && num_in_rank[index_rank] > 0 ; index_rank++) {
        num_straight++;
    }
    if (num_straight == 5) {
        straight = true;
    }

    /*check for 4-of-a-kind, 3-of-a-kind, and pairs*/
    for (int i = 0; i < 13; i++) {
        if (num_in_rank[i] == 4) {
            four = true;
        } else if (num_in_rank[i] == 3) {
            three = true;
        } else if (num_in_rank[i] == 2) {
            pairs++;
        }
    }
}

void print_result()
{
    if (straight && flush) {
        printf("straight flush\n");
    } else if (four) {
        printf("4-of-a-kind\n");
    } else if (three && pairs == 1) {
        printf("full house\n");
    } else if (flush) {
        printf("flush\n");
    } else if (straight) {
        printf("straight\n");
    } else if (three) {
        printf("3-of-a-kind\n");
    } else if (pairs == 2) {
        printf("2-pairs\n");
    } else if (pairs == 1) {
        printf("pairs\n");
    } else {
        printf("high card\n");
    }
}
