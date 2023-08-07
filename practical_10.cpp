#include<iostream>
using namespace std;
int a[100];
int top = -1;
void push(int num, int n)
{
    if(top >= n-1)
    {
        cout<<"Stack is Overflow"<<endl;
    }
    else
    {
        top++;
        a[top] = num;
        cout<<"Num is : "<<num<<endl;
    }
}
void pop()
{
    if(top>=0)
    {
        cout<<"Exit element :"<<a[top]<<endl;
        top--;
    }
    else
    {
        cout<<"Stack Underflow"<<endl;
    }
}
void Display()
{
    for(int i=top; i>=0; i--)
    {
        cout<<"Elements: "<<a[i]<<" "<<endl;
    }
}
int main()
{
    cout<<"This program is made by 22CE082_unnati"<<endl;
    int A, num, n;
    cout<<"Enetr size of stack: ";
    cin>>n;

        cout<<"\nMENU"<<endl;
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        do
    {
        cout<<"Enter n : ";
        cin>>A;
        switch (A)
        {
        case 1:
        cout<<"Enetr number for push : ";
        cin>>num;
            push(num, n);
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
             break;
        case 4:
            exit(0);
        }
    } while (1);
    return 0;
}
