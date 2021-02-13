//
//  c2-1.c
//  ddara
//
//  Created by 박영찬 on 2021/02/08.
//
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *a;
    int na;
    printf("요소 개수: ");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));
    
    if(a == NULL)
    {
        puts("메모리 확보에 실패하였습니다.");
    }else
    {
        printf("%d개의 정수를 입력하시오.\n",na);
        for (i=0; i<na; i++)
        {
            printf("a[%d] : " , i);
            scanf("%d" , &a[i]);
        }
        printf("각 요솟값은 다음과 같습니다.\n");
        for (i = 0; i < na; i++)
        {
            printf("a[%d] = %d\n",i,a[i]);
        }
        free(a);
    }
    
    return 0;
}
*/
