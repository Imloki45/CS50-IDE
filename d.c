#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
}*head=NULL,*tail=NULL;

void enque(int m)
{
    struct node *n=NULL;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=m;
    if(head==NULL)
    {
        head=tail=n;
        tail->nxt=tail;
    }
    else
    {
        n->nxt=tail->nxt;
        tail->nxt=n;
        tail=n;
    }
}

int deque()
{
    int m;
    struct node *n=NULL;
    if(head==tail)
    {
        m=head->data;
        head=tail=NULL;
    }
    else
    {
        m=head->data;
        n=head;
        head=head->nxt;
        free(n);
    }
    return m;
}

void print(struct node *n)
{
    do
    {
        printf("%d\n",n->data);
        n=n->nxt;
    }while(n->nxt!=head);
    printf("%d",tail->data);
}

int main(void)
{
    int n,m,ch;
    do
    {
        printf("\n1.enter any number\n2.remove the number\nenter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("enter a number\n");
                    scanf("%d",&n);
                    enque(n);
                    break;
            case 2:
                    if(head!=NULL)
                    {
                        n=deque();
                        printf("deleted number is %d",n);
                    }
                    else
                    {
                        printf("list is empty\n");
                    }
                    break;
        }
    }while(ch>=1&&ch<=2);
}