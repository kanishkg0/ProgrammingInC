#include <stdio.h>

int main() {
    int r, c, winner = 0;
    char ch;
    char arr[3][3] = {0};

    printf("Let the X-man start the game:\n");

    for (int i = 1; i <= 9; i++)
    {
        // Decide whose turn it is
        if (i % 2 != 0)
        {
            ch = 'X';
        }
        else
        {
            ch = 'O';
        }

        printf("\nMove %d - %c's turn\n", i, ch);
        printf("Enter row and column: ");
        scanf("%d %d", &r, &c);

        // Invalid position
        if (r < 0 || r > 2 || c < 0 || c > 2)
        {
            printf("Invalid place to fill\n");
            i--;
            continue;
        }

        // Position already occupied
        if (arr[r][c] != 0)
        {
            printf("Place already filled!\n");
            i--;
            continue;
        }

        printf("%c selected arr[%d][%d]\n", ch, r, c);

        arr[r][c] = ch;

        // Display board
        printf("\nCurrent board is:\n");

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[j][k] == 0)
                {
                    printf("- ");
                }
                else
                {
                    printf("%c ", arr[j][k]);
                }
            }

            printf("\n");
        }

        // Check winner
        if (
            (arr[0][0] == ch && arr[0][1] == ch && arr[0][2] == ch) ||
            (arr[1][0] == ch && arr[1][1] == ch && arr[1][2] == ch) ||
            (arr[2][0] == ch && arr[2][1] == ch && arr[2][2] == ch) ||

            (arr[0][0] == ch && arr[1][0] == ch && arr[2][0] == ch) ||
            (arr[0][1] == ch && arr[1][1] == ch && arr[2][1] == ch) ||
            (arr[0][2] == ch && arr[1][2] == ch && arr[2][2] == ch) ||

            (arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) ||
            (arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch)
        )
        {
            winner = 1;
            printf("\n%c won!\n", ch);
            break;
        }
    }

    if (winner == 0)
    {
        printf("\nNo-one won\n");
    }

return 0;
}