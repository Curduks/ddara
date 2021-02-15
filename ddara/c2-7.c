//
//  c2-7.c
//  ddara
//
//  Created by 박영찬 on 2021/02/13.
//
/*
#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{ type t = x; x = y ; y = t;}while(0)

void ary_reverse(int*,int);

int main()
{
    int i;
    int *x;
    int nx;
    
    printf("요소 개수 : ");
    scanf("%d" , &nx);
    x = calloc(nx, sizeof(int));
    printf("%d개의 정수를 입력하세요.\n",nx);
    for (i=0; i<nx; i++)
    {
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    for (int k=0; k<nx; k++)
    {
        printf("%d ", x[k]);
    }
    printf("\n");
    ary_reverse(x, nx);
    printf("역순 정렬을 종료합니다.\n");
 //   for(i=0; i<nx; i++)
 //       printf("x[%d] = %d \n", i , x[i]);
    free(x);
    return 0;
}

void ary_reverse(int a[], int n)
{
    int i;
    for(i = 0 ; i<n/2; i++)
    {
        printf("a[%d]과 a[%d]를 교환합니다.\n",i,n-i-1);
        swap(int, a[i], a[n-i-1]);
        for(int k = 0; k<n; k++)
            printf("%d ", a[k]);
        printf("\n");
        
    }
        
}
*/
