// Stack implementation in C

#include <iostream>
#include <stdlib.h>
#define MAX 10
using namespace std;
int count = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    cout<<endl<<"STACK FULL"<<endl;
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}

// Remove element from stack
void pop(st *s) {
  if (isempty(s)) {
    cout<<endl<<" STACK EMPTY "<<endl;
  } else {
    cout<<"Item popped " << s->items[s->top]<<endl;
    s->top--;
  }
  count--;
  cout<<endl;
}

// Print elements of stack
void printStack(st *s) {
  cout<<"Stack: "<<endl;
  for (int i = 0; i < count; i++) {
    cout<< s->items[i]<<endl;
  }
  cout<<endl;
}


int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);
  push(s, 10);
  push(s, 20);
  push(s, 30);
  push(s, 40);
  push(s, 12);
  push(s, 22);
  push(s, 31);
  push(s, 41);


  printStack(s);

  pop(s);

  cout<<endl <<"After popping out\n"<<endl;
  printStack(s);
}
