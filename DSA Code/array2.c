#include<stdio.h>
int main()
{

    int n,A[100],i,x;
    printf("How many numbers to read?");
    scanf("%d",&n);
    for(i=0;i<n;++i){
    scanf("%d",&A[i]);
    }
    x=A[n-1];
    printf("%d\n",x);
    return 0;
}
