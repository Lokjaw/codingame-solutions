#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the moutain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    // game loop
    while (1) 
    {
        int iM=0; // represents the mountain selected
        int maxM=0; // represents the maximum height of all mountains
        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            scanf("%d", &mountainH); // we get the heigh of the mountain
            if(mountainH>maxM) // Compare the heigh of the current mountain to the maximum heigh of a Mountain
            { // If we have a new highest mountain
                maxM = mountainH; // We assign this new mountain heigh to maxM
                iM=i; // And assign the mountain that has this height to iM
            }
        }
        printf("%d\n",iM); // The index of the mountain to fire on is iM decided in the iteration
    }
    return 0;
}
