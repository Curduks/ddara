//
//  IntStack.h
//  ddara
//
//  Created by 박영찬 on 2021/02/27.
//

#ifndef IntStack_h
#define IntStack_h

typedef struct
{
    int max; //스택용량
    int ptr; //스택 포인터
    int *stk; //스택의 첫 오쇼에 대한 포인터
} IntStack;

int Initialize(IntStack *s, int max); //스택 초기화

int Push(IntStack *s,int x);

int Pop(IntStack *s,int *x);

int Peek(const IntStack *s, int *x);

void Clear(IntStack *s);

int Capacity(const IntStack *s);

int Size(const IntStack *s);

int IsEmpty(const IntStack *s);

int IsFull(const IntStack *s);

int Search(const IntStack *s, int x);

void Print(const IntStack *s);

void Terminate(IntStack *s);



#endif /* IntStack_h */
