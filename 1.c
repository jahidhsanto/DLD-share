#include <stdio.h>
int main()
{
    //Declare necessary variables
    int N, X, shilaToys = 0, MunnaToys = 0, totl = 0;

    /*Get number of toys 'N' Shila has and
    amount of toys 'X' has been stolen from Munna’s toy box*/
    scanf("%d %d", &N, &X);

    //Print total number of toys Shila has
    shilaToys = N + (2 * N);

    //Print total number of toys Munna has
    MunnaToys = ((2 * N - X) + 2 * (2 * N - X));

    //Compute total number of toys Shila and Munna both have after their Birthday Party
    totl = shilaToys + MunnaToys;

    //Print total number of toys Shila and Munna both have after their Birthday Party
    printf("The total number of toys Shila and Munna both have after their Birthday Party is: %d", totl);

    return 0;
}