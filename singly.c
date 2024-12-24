
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
struct node* createNode(struct node *head,int data){
   struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

  
    if(head == NULL){
        head = newNode;
    } else {
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}
struct node* insertatend(struct node *head,int data){
     struct node *temp=head;
     struct node *newNode = (struct node*)malloc(sizeof(struct node));
     newNode->data = data;
     newNode->next=NULL;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next=newNode;
     return head;
    
}
struct node* insertatbeg(struct node *head,int data){
    struct node *temp=head;
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head=newNode;

    return head;

}
struct node * insertatpos(struct node*head,int pos,int data){
    int i=1;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    if(pos<1){
        printf("Invalid position");
        return;
    }
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return newNode;
    }
    struct node *temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
       
    
}
struct node* deleteatbeg(struct node *head){
    if(head==NULL||head->next==NULL){
       return;
    }
    struct node *temp=head;
    head=head->next;
    free(temp); 
    return head;
}
void deleteatend(struct node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    struct node *temp=head;
    struct node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
        
    }
    prev->next=NULL;
    free(temp);
    
}
void deleteatpos(struct node*head,int pos){
    struct node*newNode=NULL;
    struct node*temp=head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newNode=temp->next;
    temp->next=newNode->next;
    free(newNode);
}

void display(struct node*head){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}
int main(){
    struct node *head = NULL;
    int val1,val2,val3,val4,val5,val6;
    printf("Enter the values of the linked list: ");
    scanf("%d",&val1);
    scanf("%d",&val2);
    scanf("%d",&val3);
    scanf("%d",&val4);
    scanf("%d",&val5);
    scanf("%d",&val6);
    head=createNode(head,val1);
    head=createNode(head,val2);
    head=createNode(head,val3);
    head=insertatend(head,val4);
    head=insertatbeg(head,val5);
    head=insertatpos(head,3,val6);
    display(head);
    
    //head=deleteatbeg(head);
    //display(head);
    // deleteatend(head);
    //display(head);
    //deleteatpos(head,3);
    //display(head);
    return 0;
}
