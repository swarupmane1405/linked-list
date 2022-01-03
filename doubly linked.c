#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *temp=NULL;


void create()
{
	int ele;
	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&ele);
	temp->data=ele;
	temp->next=NULL;
	temp->prev=NULL;
}

void insertfront()
{
	
	create();
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
		
	}
	printf("\nnode inserted\n");
	
}
void insertend()
{  struct node *ptr;
   create();
   if(head==NULL)
   {
   	 head=temp;
   }
   else
   {
   	ptr=head;
   	while(ptr->next!=NULL)
   	{
   		ptr=ptr->next;
	   }
	ptr->next=temp;
	temp->prev=ptr;
	temp->next=NULL;   
   }
  printf("node inserted"); 
	
}

void deletefront()
{ 
int a;
if(head==NULL)
{
	printf("\nunderflow\n");	
}
else if(head->next==NULL)
{
    a=head->data;
	head=NULL;
	free(head);
	printf("%d is deleted",a);
}
else{
	temp=head;
	head=head->next;
	head->prev=NULL;
	a=temp->data;
	free(temp);
	printf("%d is deleted:",a);

}


	
}
void deleteend()
{ 
int a;
	if(head==NULL)
{
	printf("\nunderflow\n");	
}
else if(head->next==NULL)
{
    a=head->data;
	head=NULL;
	free(head);
	printf("%d is deleted",a);
}
else
{
	temp=head;
	if(temp->next!=NULL)
	{
		temp=temp->next;
	}
		a=temp->data;
	temp->prev=NULL;

	free(temp);
	printf("%d is deleted",a);
}
}

void displayf()
{
	 printf("\n printing values...\n");  
    temp=head;  
    while(temp != NULL)  
    {  
        printf("%d->",temp->data);  
        temp=temp->next;  
    } 
	
}

void main()
{
	int ch=0;
	while(ch!=9)
	{
		 printf("\n*********PRN 2010015*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&ch); 
        
		
	switch(ch)
	     {
		case 1:
			insertfront();
			break;
		case 2:
			insertend();
			break;
		case 3:
		//	insertrandom();
			break;
		case 4:
			deletefront();
			break;
		case 5:
			deleteend();
			break;
		case 6:
		//	deleterandom();
			break;
		case 7:
			displayf();
			break;
		case 8:
		//	displayb();
			break;
		case 9:
			printf("exiting...");
			
											
		 }	 
	}

}


