//Write a program in C to find the second smallest element in an array.
#include<stdio.h>
int main(){
int n;
printf("enter the number of elements :");
scanf("%d",&n);
if(n<2){
    printf("insuffiecient elements");
}
int arr[n];

for(int i=0; i<n; i++){
    printf("Enter value:");
    scanf("%d",&arr[i]);
}
int smallest ,secsmallest;
//intializing smallest and second smallest val
if(arr[0]< arr[1]){
    smallest=arr[0];
    secsmallest=arr[1];
}
else{
    secsmallest=arr[0];
    smallest=arr[1];
}
for(int i=2;i<n;i++){
    if(arr[i]<smallest){
        secsmallest=smallest;
        smallest=arr[i];

    }
    else if(arr[i]<secsmallest&&arr[i]>smallest){
        secsmallest=arr[i];
    }
}
if(smallest==secsmallest){
    printf("no second smallest value");

}
else{
    printf("second smallest element %d",secsmallest);
}
}
