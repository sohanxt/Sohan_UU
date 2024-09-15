#include<iostream>
#define MAX 5

using namespace std;

void enQueue();
void deQueue();
void display();

int items[MAX], front=-1, rear=-1;

void enQueue(int value){
    if (rear==MAX-1)
       cout<<"\n QUEUE IS FULL"<<endl;
    else{
        if(front==-1)
           front=0;
        rear++;
        items[rear]=value;
        cout<<" inserted-> "<< value<<endl;
    }
}


void deQueue(){
    if(front==-1)
      cout<<" queue is empty"<<endl;
    else{
        cout<<"deleted: "<<items[front]<<endl;
        front++;
    }
}

void display(){
    if (rear==-1)
      cout<<" queue is empty"<<endl;
    else{
        int i;
        cout<<"queue elements are: "<<endl;
        for(i=front;i<=rear;i++)
          cout<<items[i]<<endl;
    }
}

int main(){
   deQueue();

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);



    display();
    deQueue();
    display();
}
