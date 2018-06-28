#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("Enter a character whose ASCII value you want to know!\n");
    scanf("%c", &i);
    printf("The ASCII value of %c is %d", i, i);
    return 0;
}
