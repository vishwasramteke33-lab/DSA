#include <stdio.h>

int main()
{
    int choice, i, j, length;
    char str1[100], str2[100];

    printf("--- String Operations Menu ---\n");
    printf("1. Find Length\n");
    printf("2. Copy String\n");
    printf("3. Compare Strings\n");
    printf("4. Append (Concatenate) Strings\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            printf("Enter a string: ");
            scanf("%99s", str1);

            for (length = 0; str1[length] != '\0'; length++);

            printf("The length of string is: %d\n", length);
            break;
        }

        case 2:
        {
            printf("Enter source string: ");
            scanf("%99s", str1);

            for (i = 0; str1[i] != '\0'; i++)
            {
                str2[i] = str1[i];
            }

            str2[i] = '\0';

            printf("Copied string (Destination): %s\n", str2);
            break;
        }

        case 3:
        {
            printf("Enter first string: ");
            scanf("%99s", str1);

            printf("Enter second string: ");
            scanf("%99s", str2);

            for (i = 0; str1[i] != '\0' && str1[i] == str2[i]; i++);

            if (str1[i] == '\0' && str2[i] == '\0')
            {
                printf("Strings are equal.\n");
            }
            else
            {
                printf("Strings are not equal.\n");
            }

            break;
        }

        case 4:
        {
            printf("Enter first string (Destination): ");
            scanf("%99s", str1);

            printf("Enter second string (Source): ");
            scanf("%99s", str2);

            for (i = 0; str1[i] != '\0'; i++);

            for (j = 0; str2[j] != '\0'; j++)
            {
                str1[i] = str2[j];
                i++;
            }

            str1[i] = '\0';

            printf("Appended string: %s\n", str1);
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
