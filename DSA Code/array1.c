#include<stdio.h>
void main()
{

    int n,A[100],i;
    printf("How many numbers to read?");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    scanf("%d",&A[i]);
    for(i=n-1;i>=0;--i)
    printf("Values of A[%d]=%d\n",i,A[i]);
    printf("\n");
}
