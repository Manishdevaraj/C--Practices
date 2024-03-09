#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node*head=NULL;
void insertatbegin(int val)
{
    node*newnode=new node;
    if(newnode==NULL)
    {
        cout<<"out of memory";
        return;
    }
     
        newnode->data=val;
        if(head==NULL)
        {
             head=newnode;
            newnode->next=newnode;
           
        }
        else
        {
            newnode->next=head->next;
            head->next=newnode;
        }
     

}

void display()
{
    node* temp=head->next;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head->next);
    
}
void insertatend(int val)
{
        if(head==NULL)
    {
        insertatbegin(val);
    }
    else
    {
        node*newnode=new node;
        if(newnode==NULL)
        {
            cout<<"out of memory";
            return;
        }

        newnode->data=val;

        newnode->next=head->next;
        head->next=newnode;
        head=newnode;
    }    
}




int main()
{
  insertatbegin(10);  
  insertatbegin(20);  
  insertatbegin(30);  
  insertatbegin(40);  
  insertatend(90);
  display();
}