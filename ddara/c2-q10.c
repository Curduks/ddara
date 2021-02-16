//
//  c2-q10.c
//  ddara
//
//  Created by 박영찬 on 2021/02/15.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type,x,y) do{type t = x; x=y; y=t;} while(0)

void shuffle(int*,int);

int main()
{
    int *x;
    int nx;
    
    printf("요솟수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    
    printf("%d개의 정수를 입력하세여. \n", nx);
    for(int i = 0; i< nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
    
    shuffle(x, nx);
    
    printf("배열 요소의 순서를 셔플했습니다.\n");
    for(int i= 0 ; i<nx; i++)
        printf("x[%d] = %d \n", i , x[i]);
    free(x);
    
    return 0;
}

void shuffle(int a[] , int n)
{
    srand(time(NULL));
    
    for(int i = n-1; i>0; i--)
    {
        int j = rand() % (i + 1);
        if(i != j)
            swap(int,a[i] , a[j]);
    }
    
}
*/
