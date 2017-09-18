#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{   
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
    
    int thorX=initialTX;
    int thorY=initialTY;
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);
        
        char *directionX = "";
        char *directionY = "";

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        if(thorX<lightX)
        {
            directionX="E";
            thorX++;
        }
        else if(thorX>lightX)
        {
            directionX="W";
            thorX--;
        }
        if(thorY<lightY)
        {
            directionY="S";
            thorY++;
        }
        else if(thorY>lightY)
        {
            directionY="N";
            thorY--;
        }
        // A single line providing the move to be made: N NE E SE S SW W or NW
        printf("%s%s\n",directionY,directionX);
    }

    return 0;
}
