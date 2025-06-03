#include<stdio.h>
int main()
{
    int arr1[]={5, 3, 7, 1};
    int n=sizeof(arr1[0]);
    int arr2[n];
    for(int i=0;i<n;i++) {
    arr2[i] = arr1[i];
    }
    printf("Elements copied to another array:");
    for (int i= 0;i<n;i++){
    printf("%d ",arr2[i]);
    }
    return 0;
}
