#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct que
{
    int info,prio;
    struct que *next;
}nodetype;
void insert(nodetype**,nodetype**,int,int);
void display(nodetype*);
void main()
{
    nodetype *front=NULL,*rear=NULL;
    int ch,pr,num,c=0;
    int tseats=20;
    int booked;
   
    do
    {
        printf("Menu\n1.Insert\n2.Display\n3.Exit\nChoice : ");
        scanf("%d",&ch);
        switch(ch)
        {
             
             case 1: 
             printf("Total seats :%d \n",tseats);
             printf("List of priority:1-->2-->3-->4\n");
             printf("List of Passenger no:\n4:Assistance passenger\n5:Extra Paid Passenger\n6:Child Passenger priority\n7:Common Passenger priority\n");
             printf("Enter the no of Booked Passengers:\n");
             scanf("%d",&booked);
             for(int x=1; x<=booked; x++){
             printf("List of priority:1-->2-->3-->4\n");
             printf("List of Passenger no:\n4:Assistance passenger\n5:Extra Paid Passenger\n6:Child Passenger priority\n7:Common Passenger priority\n");
             printf("\nEnter the Passenger no and its priority : ");
             scanf("%d  %d",&num,&pr);
             insert(&front,&rear,num,pr);
             }
             break;
             case 2: if(front==NULL)
             printf("\nNo elements in the Priority Queue\n");
             else
             display(front);
             break;
             default:
             printf("\nEnter the correct choice\n");
        }
        printf("press 1 to continue\n");
        scanf("%d",&c);
    }while(c==1);
    
}
void insert(nodetype **front,nodetype **rear,int num,int pr)
{
    nodetype *p=NULL,*tmp=*front;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
         p->info=num;
         p->prio=pr;
         p->next=NULL;
    }
    if((*rear)==NULL)
    {
         (*front)=(*rear)=p;
    }
    else
    {
         if((p->prio)>((*rear)->prio))
         {
              (*rear)->next=p;
              (*rear)=p;
         }
         else if(p->prio<((*front)->prio))
         {
              p->next=(*front);
              (*front)=p;
         }
         else
         {
              while(((tmp->next)->prio)<(p->prio))
              tmp=tmp->next;
              p->next=tmp->next;
              tmp->next=p;
         }
    }
    printf("\n");
}
void display(nodetype *front)
{
    int booked;
    int y=0;
    printf("Total Seats in the flight are 20\n");
    printf("List of Passenger is as below\n");
    nodetype *tmp;
    tmp=front;
    printf("Enter the no of Booked Passengers:");
    scanf("%d",&booked);
    
    while(tmp!=NULL)
    {
        if((tmp->info)==4){
            printf("Assistance Passenger %d\n ",y+1);
            y=y+1;
        }
        else if((tmp->info)==5){
            printf("Extra paid Passenger %d\n",y+1);
            y=y+1;
        }
        else if((tmp->info)==6){
            printf("Child Passenger %d\n",y+1);
            y=y+1;
        }
        else if((tmp->info)==7){
            printf("Common Passenger %d\n",y+1);
            y=y+1;
        }
        
         //printf("\t%d -->%d",tmp->info,tmp->prio );
         tmp=tmp->next;
         
    }
    printf("The total occupied Seats ranges from 1 to %d\n", y);
    printf("The Vacant Seats ranges from %d to 20",20-y+1);
    printf("\n");
    
}
