#include <stdio.h>
#include <conio.h>

void printArray(char A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%c ", A[i]);
    printf("\n");
}

void merge(char arr[], int l, int m, int r)
{

    int i, j, k,m1,n,o;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    char L[n1], R[n2];
  
   printf("\n %d %d  %d %d %d\n",n1,n2,l,m,r);

    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
        printf("%c",L[i]);}

    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
  	printf("%c",arr[m+1+j]);}
    
   i = 0; // Initial index of first subarray
    j= 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

 while (j < n2) {
       arr[k++]=R[j++];
}
 while (i <n1) {
       arr[k++]=L[i++];
}
}
  
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(char arr[], int l, int r)
{
    if (l < r) {
      
	int m = l + (r - l) / 2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
return;
}
  
/* UTILITY FUNCTIONS */
/* Function to print an array */

  
/* Driver code */
int main()
{
    char arr[]="string";
    int arr_size = 6;
  
   
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}