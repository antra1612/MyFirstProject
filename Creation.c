#include<conio.h>
#include<stdio.h>
typedef struct nodes
{
	int vertex;
	struct node *next;
}node;
void graph_creation(int no_of_vertices,node *heads)
{
	int no_of_adjacent_vertices;
	node *oldnode,*temp;
	int i,j;
    for(i=0;i<no_of_vertices;i++)
	{
		printf("Enter the number of adjacent vertices of v%d:",i);
		scanf("%d",&no_of_adjacent_vertices);
		heads->vertex=i+1;
		heads->next=NULL;
		for(j=0;j<no_of_adjacent_vertices;j++)
		{
			node *newnode=(node *)malloc(sizeof(node *));
			printf("Enter adjacent vertex%d:",j);
			scanf("%d",&newnode->vertex);
			newnode->next=NULL;
			if(j==0)
			{
				printf("\nHeads:%d\n",heads);
				heads->next=newnode;
			}
			else
			{
			    oldnode->next=newnode;	
			}
			   oldnode=newnode;
		}
		if(i<no_of_vertices)
		heads++;
	}
	
}
void display(int no_of_vertices,node *heads)
{
	int i;
	for(i=0;i<no_of_vertices;i++)
	{
	    node *temp=heads;
	    while(temp!=NULL)
		{
			printf("v%d->",temp->vertex);
			temp=temp->next;
		}
		heads++;
		printf("\n");
	}
}
void main()
{
	int no_of_vertices;
	printf("Enter the number of vertices: ");
	scanf("%d",&no_of_vertices);
	node *heads=(node *)calloc(no_of_vertices,sizeof(node *));
	graph_creation(no_of_vertices,heads);\
	display(no_of_vertices,heads);
	getch();
}
