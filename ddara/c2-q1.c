//
//  c2-q1.c
//  ddara
//
//  Created by 박영찬 on 2021/02/13.
//
/*
#include <stdio.h>
#include <stdlib.h>

int minof(const int*, int);
int sumof(const int*, int);
double aveof(const int* , int);

int main()
{
    int *height;
    int number;
    printf("사람 수: ");
    scanf("%d",&number);
    height = calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요.\n",number);
    for (int i = 0; i<number; i++)
    {
        printf("height[%d]: " , i);
        scanf("%d", &height[i]);
    }
    printf("최솟값은 %d입니다. \n", minof(height, number));
    printf("키의 합계는 %d입니다. \n" , sumof(height, number));
    printf("키의 평균값은 %f입니다. \n" , aveof(height, number));
    free(height);
    return 0;
}

int minof(const int a[], int n)
{
    int min = a[0];
    for(int i = 1; i<n ; i++)
        if(min > a[i]) min = a[i];
    
    return min;
}

int sumof(const int a[] , int n)
{
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++)
        sum+=a[i];
    return sum;
}

double aveof(const int a[], int n)
{
    int sum = 0;
    
    for(int i =0;i<n;i++)
        sum+=a[i];
    return sum/n;
}
*/
