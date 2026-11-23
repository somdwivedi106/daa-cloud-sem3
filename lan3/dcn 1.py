#include <stdio.h>
#include <string.h>

#define MAX 100

/* Bit stuffing: insert 0 after five consecutive 1s */
void bitStuff(char in[], char out[])
{
    int i, j = 0, count = 0;

    for (i = 0; in[i] != '\0'; i++)
    {
        out[j++] = in[i];

        if (in[i] == '1')
        {
            count++;
            if (count == 5)
            {
                out[j++] = '0';   /* stuffed bit */
                count = 0;
            }
        }
        else
            count = 0;
    }
    out[j] = '\0';
}

/* Bit de-stuffing: remove the 0 that follows five consecutive 1s */
void bitDestuff(char in[], char out[])
{
    int i, j = 0, count = 0;

    for (i = 0; in[i] != '\0'; i++)
    {
        out[j++] = in[i];

        if (in[i] == '1')
        {
            count++;
            if (count == 5)
            {
                i++;              /* skip the stuffed 0 */
                count = 0;
            }
        }
        else
            count = 0;
    }
    out[j] = '\0';
}

/* Check that the input contains only 0s and 1s */
int isValid(char s[])
{
    int i;
    if (s[0] == '\0')
        return 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] != '0' && s[i] != '1')
            return 0;
    return 1;
}

int main()
{
    char data[MAX], stuffed[2 * MAX], recovered[MAX];

    printf("Enter the bit stream (0s and 1s only): ");
    scanf("%99s", data);

    if (!isValid(data))
    {
        printf("Invalid input! Enter only 0 and 1.\n");
        return 1;
    }

    bitStuff(data, stuffed);
    printf("\nOriginal bit stream  : %s", data);
    printf("\nStuffed bit stream   : %s", stuffed);

    bitDestuff(stuffed, recovered);
    printf("\nDe-stuffed bit stream: %s\n", recovered);

    if (strcmp(data, recovered) == 0)
        printf("\nResult: Original and recovered streams match. Verified!\n");
    else
        printf("\nResult: Streams do not match. Error!\n");

    return 0;
}