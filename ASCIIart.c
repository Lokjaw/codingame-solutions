#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    fgets(T, 257, stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        fgets(ROW, 1025, stdin);
        
        char asci[30];  // Place where we will print a row of the ascii
        int indx;       // Index in alfabet order of where a letter starts in ROW[X]
        for(int i=0;i<strlen(T)-1;i++)  // A loop that must be done for the number of characters that T has
        {
            if(T[i]>='A' && T[i]<='Z')  // We tansform the character to lowercase if it's uppercase
            {
                T[i]=T[i] -('A'-'a');
            }
            if(T[i]>='a' && T[i]<='z')  // We assign the index relative to the first member a=0 b=1 c=2, etc...
            {
                indx= T[i]-'a';
            }
            else                        // If the character was not a letter then the index will be the next
            {                           // value after 'z', that is 'z' + 1
                indx=1+'z'-'a';
            }
            strncpy(asci,ROW+indx*L,L); // We copy to asci the values stored in ROW+(indx*L) for L spaces
            asci[L]='\0';               // We then add the termination value to the last member of the array
            printf("%s",asci);          // And whe print that row
        }                           // We will do this for all rows untill the ASCII code is displayed
        printf("\n");
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    return 0;
}
