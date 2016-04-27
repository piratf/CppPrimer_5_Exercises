// Write a program to read `string`s from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximun number of duplicates, or else print a message saying that no word was repeated. For example, if the input is
//
// how now now now brown cow cow
//
// the output should indicate that the word now occurred three times.

#include <cstdio>
#include <cstring>

int main() {
    freopen("test.5.14.txt", "r", stdin);

    const int N = 10;

    char pre[N] = {};
    char cur[N] = {};
    char temp[N] = {};

    int cnt = 1;
    int maxv = 1;

    while (~scanf("%s", cur)) {
        if (strcmp(cur, pre) == 0) {
            ++cnt;
        } else {
            if (cnt > maxv) {
                maxv = cnt;
                cnt = 1;
                strcpy(temp, pre);
            }

            strcpy(pre, cur);
        }
    }

    if (cnt > maxv) {
        maxv = cnt;
        cnt = 1;
        strcpy(temp, pre);
    }

    if (maxv <= 1) {
        puts("no word was repeated.");
    } else {
        printf("the word %s repeated %d times\n", temp, maxv);
    }
}