#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define ll long long

void decrypt(char *cipher, int key) {
    int i;
    int len = strlen(cipher);
    for (i = 0; i < len; i++) {
        if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
            cipher[i] = ((cipher[i] - 'A' - key + 26) % 26) + 'A';
        } else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
            cipher[i] = ((cipher[i] - 'a' - key + 26) % 26) + 'a'; 
        }
    }
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        char spe[100], cipher[100];
        scanf("%s %s", spe, cipher); 

        for (int key = 0; key < 26; key++) {
            decrypt(cipher, key); 
            if (strstr(cipher, spe) != NULL) {
                printf("%s\n", cipher); 
                break; 
            }
        }
    }
    return 0;
}
