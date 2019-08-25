#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int r,int m)
{
    
     int i,j,n1,n2;
     n1 = m - l + 1;
     n2 = r - m;
      int ar1[n1];
     int ar2[n2];
     for(i = 0;i < n1;i++)
     {
     ar1[i] = arr[l + i];
     }
      for(j = 0;j < n2;j++)
     {
     ar1[j] = arr[m + 1 + j];
     }
     i = 0;
     j = 0;
     int k = l;
     while((i < n1) && (j < n2))
     {
     if(ar1[i] <= ar2[j])
          {
          arr[k] = ar1[i];
          i++;
        
          }
     else
          {
           arr[k] = ar2[j];
           j++;
           }
             k++;
      }
       //here, after placing first sub array we go to the next because whatever in the first array, is already merge sorted  . so we dont need check whether which one is to place first
       
      while(i < n1)
      {  
          arr[k] = ar1[i];
          i++;
           k++;
      }
      while(j < n2)
      {  
          arr[k] = ar2[j];
          j++;
           k++;
      }
}
      
void mergesort(int arr[],int l,int r)
{
     int m;
     m = (r + l)/2;
     if(l < r)
     {
     mergesort(arr,l,m);
     mergesort(arr,m + 1,r);
     merge(arr,l,r,m);
     }
}

void printarray(int arr[],int size)
{    
     
     for(int i = 0;i < size;i++)
     {
     printf("%d\t",arr[i]);
     }
}
int main()
{
     int arr[100];
     int i,n;
     printf("\benter the total no of elements in array to be sorted");
     scanf("%d",&n);
     for(i = 0;i < n;i++)
     {
     printf("enter the element at the index %d:",i);
     scanf("%d",&arr[i]);
     }
     printf("\nthe given matrix is");
     printarray(arr,n);
     mergesort(arr,0,n - 1);
     printf("\nthe merge sort of the given array is ");
     printarray(arr,n);
     return 0;
     
}
    

