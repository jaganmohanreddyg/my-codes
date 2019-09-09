#include<stdio.h> 
#include<stdlib.h>
/*void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/
void printbinarytree(int arr[],int n);
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1;
    int r = 2*i + 2; 
    int temp; 
    if (l < n && arr[l] < arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] < arr[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
       // swap(arr[i],arr[largest]);
         printbinarytree(arr, n);
       temp=arr[i];
       arr[i]=arr[largest];
       arr[largest]=temp;
     
       heapify(arr, n, largest); 
        printbinarytree(arr, n);
    } 
} 

void heapSort(int arr[], int n) 
{   
	 int temp;
    for (int i = n / 2 - 1; i >= 0; i--) 
    {
        heapify(arr, n, i); 
      
        printf("\n");
    }
    for (int i=n-1; i>=0; i--) 
    { 
        //swap(arr[0],arr[i]);
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(arr, i, 0); 
     
        printf("\n");
    } 
} 
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        printf("%d",arr[i]); 
    printf("\n"); 
} 
void printbinarytree(int arr[],int n)
{
	int i;
	int j=1;
	for(i=0;i<n;i++)
		{
			
			printf("%d\t",arr[i]);
			while((j==1)||(j==3)||(j==9)||(j==17)||(j==33)||(j==65)||(j==129)||(j==256)||(j==512)||(j==1024))
			{
			printf("\n");
			break;
			}
			j++;
		}
}
int main() 
{ 
    int arr[100]; 
    int n; 
    printf("enter the total number of elements in the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("enter the value at the index %d",i);
    scanf("%d",&arr[i]);
    }
    printf("the input array is ");
    printArray(arr, n); 
    heapSort(arr, n);   
    printf("Sorted array is \n"); 
    printArray(arr, n); 
} 
