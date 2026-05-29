//Write a program in C to count the total number of duplicate elements in an array.
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
//comparing each element with all the other elements and incrementing count
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                }
            }
        }
 printf(" \nNumber of duplicates: %d",count);
}





