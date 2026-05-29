//Write a program in C to find the sum of rows and columns of a matrix.
#include<stdio.h>
int main(){
int rows,cols,i,j;
int rowsum=0;
int colsum=0;//initialising sum
//taking input for rows and columns of matrix
printf("enter number of rows:");
scanf("%d",&rows);
printf("enter number of cols:");
scanf("%d",&cols);
//checking if square matrix
if(rows!=cols){
    printf("Invalid matrix");
}
int matrix[rows][cols]; //creating 2d array for matrix
//inputting the values for the matrix
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("enter element:");
        scanf("%d",&matrix[i][j]);
    }
}
//printing the matrix
for(i=0;i<rows;i++){
        printf("\n");
    for(j=0;j<cols;j++){
        printf("%d ", matrix[i][j]);
    }
}
//finding the sum of rows and columns
printf("\nSUM OF ROWS:");
for(i=0;i<rows;i++){
    printf("\nsum of row %d :",i+1);
    for(j=0;j<cols;j++){
        rowsum+=matrix[i][j];

    }
    printf("%d",rowsum);
    rowsum=0; //set rowsum to 0 after each row
}
printf("\nSUM OF COLUMNS:");
for(i=0;i<cols;i++){
    printf("\nsum of column %d: ",i+1);
    for(j=0;j<rows;j++){
        colsum+=matrix[j][i];

    }
    printf("%d",colsum);
    colsum=0; //set column sum to 0 after each column
}
}
