#include<stdio.h>
int main()
{
    int x,c;
    int a[5]={1,2,4,5,7};
    scanf("%d",&x);
    for(int i=0;i<5;i++)
    if(x==a[i]){
    printf("%d is present",x);
    c=1;
    break;
}
if(c==0){
    printf("%d is not present",x);
}
}
