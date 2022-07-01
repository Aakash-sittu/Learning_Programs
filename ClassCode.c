#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[10][10], b[10][10], c[10][10], n = 0, m = 0, i = 0, j = 0, p = 0, q = 0, k = 0;
    int *pt, *pt1, *pt2;
    printf("Enter size of 1st 2d array : ");
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++){

            printf("Enter element no. %d %d :", i, j);

            scanf("%d", &a[i][j]);   }
    }
    printf("Enter size of 2nd 2d array : ");
    scanf("%d %d", &p, &q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
    {
        printf("Enter element no. %d %d :", i, j);
        scanf("%d", &b[i][j]);
    }
    }
    if (m != p)
    {
    printf("Multiplication cannot be done\n");
    exit(0);
    }
    pt = &a[0][0];
    pt1 = &b[0][0];
    pt2 = &c[0][0];
    for (i = 0; i < n; i++){
        for (k = 0; k < q; k++) {
         *(pt2 + (i * 10 + k)) = 0;
            for (j = 0; j < m; j++){
            *(pt2 + (i * 10 + k)) += *(pt + (i * 10 + j)) * *(pt1 + (j * 10 + k));
            }
    }
    }
    for (i = 0; i < n; i++)
    {

     for (j = 0; j < q; j++)

     {
        printf("%d ", c[i][j]);
     }

     printf("\n");  }

    return 0;
}