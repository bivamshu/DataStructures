#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAXSIZE 10

typedef struct stack{
    int top;
    int item[MAXSIZE];
}stack;

void initStack(stack *s){
    s -> top = -1;
}

bool isEmpty(stack *s){
    return (s->top<0);
}

bool isFull(stack *s){
    return (s->top>=MAXSIZE-1);
}

void push(stack *s, int x){
    if(isFull(s)){
        printf("The stack is full");
        return;
    }
    s->item[++(s->top)] = x;
}                                                                             


int peek(stack *s){
    if(isEmpty(s)){
        printf("stack is empty");
    }
    return s->item[s->top];
}

int pop(stack *s){
    if(isEmpty(s)){
        printf("Stack is Empty\n");
        exit(1);
    }

    return s->item[(s->top)--];
}

int main(){
    stack s;
    initStack(&s);
    if (isEmpty(&s)){
        printf("empty");
    }
    else{
        printf("not empty");
    }

    push(&s, 5);
    
    printf("\ntop = %d", peek(&s));

    pop(&s);

    printf("\ntop = %d", peek(&s));
    
    return  0;
}