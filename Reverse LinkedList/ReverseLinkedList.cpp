#include <iostream>
using namespace std;
class ListNode
{
public:
int data;
ListNode* next;
ListNode(int value)
{
data=value;
next=NULL;
}
}*start=NULL;

void add(int a)
{
  ListNode *temp=new ListNode(a);
  ListNode* temp1=start;
  if(start==NULL)
  {
    start=temp;
  }
  else
  {
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
}

ListNode* reverseList(ListNode* head)
{
  ListNode* a=NULL,*b=NULL,*temp=head;
  while(temp!=NULL)
  {
    a=temp->next;
    temp->next=b;
    b=temp;
    temp=a;
  }
  return b;
}
 
void show()
{
    if(head==NULL)
    {
        cout<<"\nThere is nothing to show\n";
    }
    else
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<"\n"<<temp->data;
            temp=temp->next;
        }
    }
}

int main()
{
int n;
cout<<"\nEnter number of node you want:";
cin>>n;
cout<<"\nEnter elements:";
for(int i=0;i<n;i++)
{
  int num;
  cin>>num;
  add(num);
}
ListNode* start=reverse(start);
show();
return 0;
}
