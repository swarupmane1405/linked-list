#include<stdio.h>  
#include<stdlib.h>  
void beginsert(int);  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *temp=NULL;
struct node *head=NULL;  

void beginsert(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
		temp=ptr;  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  
          
    }
void begdelete(int item)
    {
		struct node* ptr;
		if(head==NULL)
		{
			printf("empty");
		}
		else
		{
			ptr=head;
			head=ptr->next;
			free(ptr);
			printf("node deleted");
		}
    }    
    void display()
    {
    	 struct node *temp=head;
		 while(temp!= NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		
	}
    
    void main ()  
{  
    int ch=0,item;  
    do  
    { printf("\nEnter the choice\n");  
        scanf("%d",&ch);  
        
         
 switch(ch)
    {
    case 1:
    	printf("enter item ?\n");  
        scanf("%d",&item); 
	   	beginsert(item);
	   	break;
	case 2:
	   	begdelete(item);
	   	break;
    case 3:
	   	display(); 
		   break;  
	case 4:
		printf("exiting..."); 	
	}
    
    }while(ch != 4);  
   display();
}  
