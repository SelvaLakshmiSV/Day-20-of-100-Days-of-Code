
#include <stdio.h>

int main()
{
    int row, col, rows,cols;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    for(rows=1; rows<=row; rows++)
    {
        for(cols=1; cols<=col; cols++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}
