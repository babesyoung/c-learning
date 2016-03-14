/*
 * name: caesar.c
 * purpose: caesar encrypted
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    char encrypted_ms[80] = {'*'}, unencrypted_ms[80] = {'*'}, ch;
    int shift_amount = 0, index = 0;

    printf("enter message to be encrypted:\n");

    while ((ch = getchar()) != '\n') {
        unencrypted_ms[index] = ch;
        index++;
    }

    printf("enter shift amount(1-25)\n");
    scanf("%d", &shift_amount);

    for (int i = 0; i < index; i++) {
        if (unencrypted_ms[i] >= 'a' && unencrypted_ms[i] <= 'z') {
            encrypted_ms[i] = ((unencrypted_ms[i] - 'a') + shift_amount) % 26 + 'a';
        } else if (unencrypted_ms[i] >= 'A' && unencrypted_ms[i] <= 'Z') {
            encrypted_ms[i] = ((unencrypted_ms[i] - 'A') + shift_amount) % 26 + 'A';
        } else {
             encrypted_ms[i] = unencrypted_ms[i];
        }
    }

    printf("encrypted message:\n");
    for (int j = 0; j < index; j++) {
        printf("%c", encrypted_ms[j]);
    }
    printf("\n");

    return 0;
}
