#include <stdio.h>
#include <string.h>

int main(void) {

    char alphabet[8][3] = {{'c', '=', '0'},
                           {'c', '-', '0'},
                           {'d', 'z', '='},
                           {'d', '-', '0'},
                           {'l', 'j', '0'},
                           {'n', 'j', '0'},
                           {'s', '=', '0'},
                           {'z', '=', '0'}};

    char word[110];
    int count = 0;
    scanf("%s", word);

    int len = strlen(word);


    for (int i = 0; i < len; ++i) {
        int check = 0;
        int three = 0;

        for (int j = 0; j < 8; ++j) {

            for (int k = 0; k < 2; ++k) {
                if (word[i + k] == alphabet[j][k]) {
                    check = 1;
                } else {
                    check = 0;
                    break;
                }
            }

            if (check == 1) {
                if (j == 2) {
                    if (word[i + 2] == alphabet[j][2]) {
                        three = 1;
                    } else if (word[i + 2] != alphabet[j][2]) {
                        three = 0;
                        check = 0;
                    }
                }
                break;
            }


        }
        if (check == 1 && three == 0) {
            i++;
        } else if (check == 1 && three == 1) {
            i += 2;
        }
        count++;

    }

    printf("%d", count);
    return 0;
}
