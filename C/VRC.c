#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sender()
{
    int arr[4][5];
    printf("Enter a 16 bit binary data in blocks of four:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Block%d: ", i + 1);
        int pairity = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%1d", &arr[i][j]);
            pairity ^= arr[i][j];
        }
        arr[i][4] = pairity;
    }

    printf("\nSender generated dataBlock: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf(" ");
    }
}

void reciever()
{
    int arr[4][5];
    printf("Enter the dataBlock generated by the sender:\n");
    for (int i = 0; i < 4; i++)
    {
        int pairity = 0;
        printf("Enter Block%d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%1d", &arr[i][j]);
            pairity ^= arr[i][j];
        }
        if (pairity == 1)
        {
            printf("Invalid dataBlock!\n");
            exit(0);
        }
    }
    printf("DataBlock Accepted!\n");
}
int main()
{
    printf("Vertical Redundency Check\n\n");
    int n;
    printf("Enter 1. for Sender 2. for reciever: ");
    scanf("%d", &n);
    if (n == 1)
        sender();
    else if (n == 2)
        reciever();
    else
    {
        printf("Invalid Input!\n");
        exit(0);
    }

    return 0;
}
