#include<stdio.h>

void main()
{
    int i,j,a[10][10],t[10][10],row,column;
    

    printf("enter the row:-");
    scanf("%d",&row);

    printf("enter the column:-");
    scanf("%d",&column);

    printf("enter the array's elements \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("t[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
    } 
    for(i= 0;i<row;i++) 
    {
        for(j=0;j<column;j++)
         {
            t[j][i] = a[i][j];
         }
    }

    printf("The transpose matrix of an array:\n");
    for(i=0;i<column;i++)
     {
        for(j=0;j<row;j++)
         {
            printf("%d ",t[i][j]);
         }
        printf("\n");
    }

    
}