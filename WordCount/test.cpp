#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "stdio.h"
#include "stdlib.h"

int main(void) {
    int count = 0,count1=0;
    char s[21];
    char c[21];
    FILE* fp;
    if ((fp = fopen("D:\\×ÀÃæ\\file.txt", "r")) == NULL) {
        printf("Open the file failure...\n");
        exit(0);
    }
    while (fscanf(fp, "%s", s) != EOF)
        count++;

    while (fscanf(fp, "%c", c) != EOF)
        count1++;
    fclose(fp);
    printf("There is(are) %d word(s) in the text.\n", count);
    printf("There is(are) %d char(s) in the text.\n", count1);
    return 0;

	
}