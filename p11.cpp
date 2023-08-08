#include<iostream>
using namespace std;
int q[100];
int rear=-1;
int n;
int front=-1;
void display()
{
    cout<<"The Queue Elements: "<<endl;
    for(int i=front;i<=rear;i++)
    {
        cout<<"\nElement"<<i+1<<": "<<q[i];
    }
}
void enqueue(int x)
{
    if(rear==n-1)
        cout<<"Queue is Overflow"<<endl;
    else
    {
        rear=rear+1;
        q[rear]=x;
    }
    if(front==-1)
    {
        front=0;
        return;
    }
}
int dequeue()
{
    if(front==-1)
    {
        cout<<"\nQueue is Underflow...\n";
        return 0;
    }
    int x=q[front];
    if(front==rear)
        front=rear=-1;

    else
        front=front+1;
        return x;

}
int main()
{
    int c,s;
    cout<<"This program is made by 22CE082_unnati";
    cout<<"\nEnter the size of Queue: ";
    cin>>s;
    cout<<"Enter 1 for enqueue operation"<<endl;
    cout<<"Enter 2 for dequeue operation"<<endl;
    cout<<"Enter 3 for Display  The Queue"<<endl;
    cout<<"Enter 4 for Exit"<<endl;

    n=s;
    do{
        int m;
        cout<<"Enter the Number:"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            int x;
            cout<<"Enter the element: "<<endl;
            cin>>x;
            enqueue(x);
            break;
        case 2:
            m=dequeue();
            cout<<"Deleting Element is: "<<m<<endl;
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            exit(0);

        }
    }while(c>=1 && c<=4);

}
