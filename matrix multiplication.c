#include <stdio.h>

int main()
{
    int a[6][6], b[6][6], result[6][6], row1, col1, row2, col2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&row2, &col2);

    
    while (col1 != row2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &row1, &col1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&row2, &col2);
    }

    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<row1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<row2; ++i)
        for(j=0; j<col2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    
    for(i=0; i<row1; ++i)
        for(j=0; j<col2; ++j)
        {
            result[i][j] = 0;
        }

  
    for(i=0; i<row1; ++i)
        for(j=0; j<col2; ++j)
            for(k=0; k<col1; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }

    
    printf("\nOutput Matrix:\n");
    for(i=0; i<row1; ++i)
        for(j=0; j<col2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == col2-1)
                printf("\n\n");
        }
    return 0;
}
