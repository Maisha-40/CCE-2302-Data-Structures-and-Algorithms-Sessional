This code will allow the user to input elements:
Source Code:
#include <stdio.h>
int main() {
int rows, cols;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &cols);
int array[rows][cols];
printf("Enter the elements of the array:\n");
for(int i=0;i<rows;i++) {
for(int j=0; j < cols; j++) {
printf("Enter element at position (%d, %d): ", i, j);
scanf("%d", &array[i][j]);
}
}
printf("\nThe Array is:\n");
for(int i=0;i<rows;i++) {
for(int j=0;j<cols;j++) {
printf("%d ", array[i][j]);
}
printf("\n");
}
return 0;
}
