#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *createNode(struct node *head, int value) {
    struct node *p, *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;

    p = head;
    if (p) {
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    } else {
        head = temp;
    }
    return head; 
}
struct node *insert_at_begining(struct node *head,int value){
   struct node *temp,*p;
   temp = (struct node*)malloc(sizeof(struct node));
   temp->data = value;
   temp->link = NULL;
   
   p=head;
   if(p){
      if(p->link==NULL){
       head=p->link;
       return head;
       }
      else{
      temp->link=head;
      }
     }
      return temp;
      
}

void display(struct node *head) {
    struct node *p;
    if (head == NULL) {
        printf("EMPTY LIST\n");
        return;
    }
    p = head;
    printf("List is:\n");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;
    int val, val2, val3,val4;

    printf("Enter three values: \n");
    scanf("%d", &val);
    scanf("%d", &val2);
    scanf("%d", &val3);
    scanf("%d", &val4);

    
    head = createNode(head, val);
    head = createNode(head, val2);
    head = createNode(head, val3);
    head= insert_at_begining(head,val4);
    display(head);

  

    return 0;
}
