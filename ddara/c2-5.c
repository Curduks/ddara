//
//  c2-5.c
//  ddara
//
//  Created by 박영찬 on 2021/02/13.
//
/*
#include <stdio.h>
#include <stdlib.h>

int maxof(const int *,int);

int main()
{
    int i;
    int *height;
    int number;
    printf("사람 수: ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요. \n",number);
    for(i=0;i<number;i++)
    {
        printf("height[%d] : ",i);
        scanf("%d",&height[i]);
    }
    printf("최댓값은 %d입니다.\n",maxof(height, number));
    free(height);
    
    return 0;
}

int maxof(const int a[],int n)
{
    int i;
    int max = a[0];
    for(i = 1; i<n; i++)
        if(max<a[i]) max=a[i];
    return max;
}
*/
