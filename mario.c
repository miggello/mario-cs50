#include <stdio.h>
#include <cs50.h>

//This function is my main squeeze
int main(void)
{
    //Get the height of the bottom blocks from user.

    int height = 24;

    //loop to catch incorrect values
    while (height > 23 || height < 0)
    {
        height = get_int("height: ");
    }

    int row = 0;
    int col = 0;



    //loop through each row
    for (row = 0; row < height; row++)
    {
        //loop through each column in the row, print either a space or a block to build right triangles.
        for (col = 1; col < (2 * height + 3); col++)
        {
            if (col < height - row)
            {
                printf(" ");
            }
            else if (col == height + 1 || col == height + 2)
            {
                printf(" ");
            }
            else if (col > height + 3 + row)
            {
                break;
            }
            else
            {
                printf("#");
            }
        }
        //move output to the next row with loop.
        printf("\n");
    }
}