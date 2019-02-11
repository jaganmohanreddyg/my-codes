#include<stdio.h>
#include<stdlib.h>
struct node
{
      int data;
      struct  node *next;
};
void multiply(struct node* head1,struct node* head2,int r1,int r2,int l1,int l2)
{
     
     int first[100][100],second[100][100];
     int i,j;
     int sum;
     int multiply[100][100];
     for(i=0;i<r1;i++)
     {
     for(j=0;j<l1;j++)
     {
     first[i][j]=head1->data;
     head1=head1->next;
     }
     }
      for(i=0;i<r1;i++)
     {
     for(j=0;j<l1;j++)
     {
     second[i][j]=head2->data;
     head2=head2->next;
     }
     }
    for (int c = 0; c < r1; c++) {
      for (int d = 0; d < l2; d++) {
        for (int k = 0; k < r2; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
    for(i=0;i<r1;i++)
    {
    for(j=0;j<l2;j++)
    {
    printf("%d",multiply[i][j]);
    }
    printf("\n");
    }
   
}     
     
void print_ll(struct node* head,int r,int c){
    struct node* cur = head;
    int i=0;
    while (cur->next != NULL)
     {
    	  
        printf(" %d ", cur->data);
        i++;
         if(i==r*c-1)
        {
            break;
            }
        if(i%c==0)
        {
        printf("\n");
        i=0;
        }
       

        cur = cur->next;
    }
}
struct node* createlink(int r,int c)
{
    struct node* head = malloc(sizeof(struct node));
    struct node* cur = head;
    for (int i = 0; i < r; i++) {
    for(int j=0;j<c;j++)
    {
    	printf("enter the element of index %d%d\n",i,j);
      scanf("%d",&cur->data);
        cur->next = (i < (r*c - 1)) ? malloc(sizeof(struct node)) : NULL;
        cur = cur->next;
    }
    }
    return head;
}
void addmatrix(struct node* head1,struct node* head2, int r1,int r2,int l1,int l2)
{
      int i=0;
      /*struct node* head=malloc(sizeof(struct node));
      struct node* cur;
      
      cur=head;*/
      if((r1==r2)&&(l1==l2))
      {
      while(head1->next!=NULL)
      {
      i++;
     /* cur->data=head1->data+head2->data;
      printf("%d",cur->data);*/
      printf("%d",head1->data+head2->data);
       if(i%l1==0)
      {
      printf("\n");
      }
      /*cur->next=(i < (r1*l1 - 1)) ? malloc(sizeof(struct node)) : NULL;
      cur=cur->next;*/
      head1=head1->next;
      head2=head2->next;
        if(i==r1*l1)
      {
      break;
      }
      }
     /* while(head!=NULL)
      {
     
      if(i==r1*l1-1)
      {
      break;
      }
      printf("\n%d",head->data);
      if(i%l1==0)
      {
      printf("\n");
      }*/   
      printf("\nis the summated matrix");
      }
      else
      {
      printf("\nnot possible");
      }
      
   }  
void transpose(struct node *head,int r,int c)
{
     int i,j;
     int m[100][100];
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
               {
               m[i][j]=head->data;
               head=head->next;
               }
     }
        for(i=0;i<c;i++)
          {
               for(j=0;j<r;j++)
                     {
                         printf("%d",m[j][i]);
                      }
                      printf("\n");
          }
  }                    
                
void main()
{
      int r1,r2,l1,l2;
      int c;
      
      struct node *head1;
      struct node *head2;
      printf("\nenter the no of rows and coloumns of first matrix");
      scanf("%d%d",&r1,&l1);
      printf("\nenter the no of rows and coloumns of second  matrix");
      scanf("%d%d",&r2,&l2);
      head1=createlink(r1,l1);
      printf("\nand the matrix is \n");
      print_ll(head1,r1,l1);
      head2=createlink(r2,l2);
      print_ll(head2,r2,l2);
      printf("\nchoose in the following manner 1.addition 2.multiplication 3.transposes of each matrix");
      scanf("%d",&c);
      switch(c)
      {
            case 1:
            {
            printf("\nyou have  chosen addition\n");  
            addmatrix(head1,head2,r1,r2,l1,l2);
            break;
            }
            case 2:
            {
            printf("you have  chosen multiplication\n");
            if(l1!=r2)
          {
                     printf("multiplication is not possible:");
                     break;
           }
           else
            {
            multiply(head1,head2,r1,r2,l1,l2);
            }
            break;
            }
            case 3:
            {
            printf("transpose of first matrix");
            transpose(head1,r1,l1);
            printf("transpose of second matrix");
            transpose(head2,r2,l2);
            break;
            }
            default:
            {
            printf("why you donot chose anything\n");
            break;
            }
      }
}


            
              

      
      
      
      
