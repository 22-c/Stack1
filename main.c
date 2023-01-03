#include "stdio.h"
#include "stdlib.h"
#define MAXOFSTACK 10
int toCount=0;
struct stack{
    int data[MAXOFSTACK];
    int top;
};
typedef struct stack st;
void creat_emptyStack(st*myStack){
    myStack->top=-1;
}
int isStackIsFull(st *myStack){
    if(myStack->top==MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}
int isStackISEmpty(st *myStack){
    if(myStack->top== -1){
        return -1;
    }
}
void pushToStack(st *myStack ,int value){
  if(isStackIsFull(myStack)  ){
      printf("Stack is full");
  } else{
      myStack->top++;
      myStack->data[myStack->top]=value;
  }
}

void popFromStack(st*myStack){
    if(isStackISEmpty(myStack)){
        printf("Stack data is:%d\n",myStack->data[myStack->top]);
        myStack->top--;
    }
    toCount--;
}
int main(){
    st *myStack =(st*) malloc(sizeof (st));
    creat_emptyStack(myStack);
    int arr[]={10,20,30,40,50};
    for (int i=-1;i<5;i++){
        pushToStack(myStack,arr[i]);
        popFromStack(myStack);
    }
    return 0;
    }