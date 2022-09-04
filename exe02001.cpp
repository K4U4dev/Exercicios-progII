#include <stdio.h>
#define SIZE 10
#define FALSE 0
#define TRUE 1
typedef int BOOL;

int media(int ai[])
{
    int i, temp;
    temp = 0;
    for (i = 0; i < SIZE; i++)
        temp += ai[i];
    return (int)(temp / SIZE);
}
BOOL pertence(int val, int ar[])
{
    BOOL achou = FALSE;
    int i = 0;
    while (!achou && i < SIZE)
        if (ar[i] == val)
            achou = TRUE;
        else
            i++;
    return (achou);
}
int main()
{
    int i;
    int arint[] = {2, 3, 45, 5, 6, 7, 8, 9, 23, 12};
    if (pertence(media(arint), arint))
    {
        printf("Eh media !\n");
    }
    else
    {
        printf(" N~ao eh !\n");
    }
    return 0;
}