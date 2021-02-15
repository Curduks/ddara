//
//  c2-q8.c
//  ddara
//
//  Created by 박영찬 on 2021/02/15.
//
/*
#include <stdio.h>
#include <stdlib.h>

void ary_copy(int*,const int*, int);

int main()
{
    int *x;
    int *y;
    int n;
    
    printf("요소 개수를 입력하시오: ");
    scanf("%d", &n);
    x = calloc(n, sizeof(int));
    y = calloc(n, sizeof(int));
    for(int i = 0; i < n ; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("x배열을 y배열에 복사합니다.\n");
    ary_copy(y, x, n);
    for(int i = 0 ; i<n;i++)
        printf("x[%d] = %d\n" , i,x[i]);
    for(int i = 0 ; i<n;i++)
        printf("y[%d] = %d\n" , i,y[i]);
    
    free(x);
    free(y);
 
    return 0;
}

void ary_copy(int a[] , const int b[], int n)
{
    for(int i=0;i<n;i++)
        a[i] = b[i];
}
*/
