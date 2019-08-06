#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};
int count;
class CirList
{
    public:
    struct node *insert_last(struct node *last, int value);
    void deleteNode( struct node *last, int key);
    void display(struct node *last);
    CirList() {
        //Default constructor
    };
};

struct node * CirList :: insert_last(struct node *last, int value){
    struct node *temp;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;

    if(last == NULL) {
        last = newnode;
        last -> next = last;
        return last;
    } else {
                temp = last;
                newnode -> next = temp -> next;
                temp -> next = newnode;
                last = newnode;
                return last;
    }
}

void CirList :: display(struct node *last){
    struct node *temp = last -> next;
    count = 0;
    do{
        count++;
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }while(temp != last -> next);
    //cout<<"COUNT = "<<count;
}

void CirList :: deleteNode(struct node *last, int key)
{
    if (last == NULL)
        return;
    int n = key;
    struct node *temp =last, *prev;// -> next;

    while(count != 1)
{
        while(n > 0){
            prev = temp;
            temp = temp -> next;
            n--;
        }
        //cout<<"  "<<temp -> data;
        //cout<<"  "<<prev -> data;
        prev -> next = temp -> next ;
        temp -> next = NULL;
	cout<<"\nNode killed :-  "<<temp->data;
        free(temp);
        temp = prev -> next;
        n = key - 1;
        //cout<<endl;
              count--;
    }
    cout<<endl<<"WINNER = "<<prev -> data<<endl;

}

int main()
{
    CirList c;
    struct node *last = NULL;
    int n;
    int i;
    int node;
    int m;
    cout<<endl;
    cout<<"Enter number of nodes\n";
    cin>>n;
    cout<<"\nEnter nodes of list\n";	
    for(i = 0; i < n; i++) {
        cin>>node;
        last = c.insert_last(last, node);
    }
    cout<<"\nList :- \n";
    c.display(last);
    cout<<"\nEnter value of k\n";
    cin>>m;
    c.deleteNode(last,m);
   // c.display(last);

    return 0;
}
