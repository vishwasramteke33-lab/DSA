#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];
    int a, b, c;

    printf("Enter a string1:\n");
    scanf("%s", s1);
    printf("string 1 is:%s\n", s1);

    printf("Enter a string2:\n");
    scanf("%s", s2);
    printf("string 2 is:%s\n", s2);

    a = strlen(s1);
    b = strlen(s2);

    printf("length s1:%d\n", a);
    printf("length s2:%d\n", b);

    c = strcmp(s1, s2);

    if (c == 0)
    {
        printf("strings Matching\n");
    }
    else
    {
        printf("not matching\n");
    }

    strcat(s1, s2);
    printf("Concatenates string s2 onto the end of string s1 is:%s\n", s1);

    strcpy(s1, s2);
    printf("Copies string s2 into string s1:%s\n", s1);

    return 0;
}
