#include<iostream>
using namespace std;
struct node *head=NULL;
struct node
{
    int data;
    struct node *link;

};

struct node* create(int x)
{
    struct node *new1;
    new1=(struct node*) malloc (sizeof(struct node));
    new1->data=x;
    new1->link=NULL;
    return new1;
};
void insertfrant(int x)
{
    struct node *temp;
    temp=create(x);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
}
void Delete()
{

    head=head->link;
}
void insertlast(int x)
{
    struct node *temp;
    temp=create(x);
    if(head==NULL)
    {

         temp->link=head;
           head=temp;
    }
}
void display()
{
    if(head==NULL)
    {
        cout<<"stack is underflow"<<endl;
    }
    else
    {
        struct node *t=head;
        while(t->link!=NULL){
       cout<<" "<<t->data;
        t=t->link;
      }
      cout<<" "<<t->data;

    }
}
int main()
{

    insertfrant(10);
    insertfrant(20);
    Delete();
    insertfrant(30);
    insertfrant(40);

     Delete();
    insertfrant(50);
    insertlast(4);
    display();
    cout<<"\nThis program is made by 22CE082_unnati";
}
