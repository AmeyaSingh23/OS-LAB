//Write a program in C to find the second largest element in an array.
#include<stdio.h>
int main(){
int n;
int count=0;//counter variable


//inputting the number of elements
printf("\nenter number of elements in the array:");
scanf("%d",&n);

int arr[n];//creating array of size n


//taking input for elements of array
for(int i=0;i<n;i++){
    printf("\nenter element:");
    scanf("%d",&arr[i]);

}
printf("array:[");
for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
}
printf("]");
