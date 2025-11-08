#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int length;
    srand(time(NULL));
    const char chars[] = "`1234567890-=qwertyuiop[]asdfghjkl;'#zxcvbnm,./";
    int *plength = &length;
    printf("Please input the length of your password!\n");
    printf("Please enter a length less than %d and greater than 0\n", strlen(chars) + 1);
    scanf("%d", plength);
    if (length > strlen(chars) || length < 1)
    {
        printf("Please enter a length less than %d and greater than 0\n", strlen(chars) + 1);
        return 0;
    }
    char pass[length];
    for (int i = 0; i < length; i++)
    {
        pass[i] = chars[rand() % strlen(chars)];
    }
    printf("%s\n", pass);
    return 0;
}