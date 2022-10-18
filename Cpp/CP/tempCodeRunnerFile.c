#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}
void linkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
}
void *deleteAtFirst(struct node *ptr)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

 second=(struct node*)malloc sizeof(struct node);
  head=(struct node*)malloc sizeof(struct node);
  third=(struct node*)malloc sizeof(struct node);
  fourth=(struct node*)malloc sizeof(struct node);
  
   head->data=7;
   head->next=second;

   second->data=8;
   second->next=third;

   third->data=83;
   third->next=fourth;

   fourth->data=754;
   fourth->next=NULL;

   linkedlistTraversal(head);
   printf("\n");
   linkedlistTraversal(head);

}