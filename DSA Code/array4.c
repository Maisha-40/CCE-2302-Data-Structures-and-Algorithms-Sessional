#include<stdio.h>
void main()
{
  int n,A1[4],A2[5],i;
    printf("How many numbers to read? = ");
   scanf("%d",&n);

    printf("Enter %d numbers of first array:\n",n);
    for(i = 0; i < n; i++){
    scanf("%d",&A1[i]);
    }

    for(i = 0; i < n; i++){
        A2[i]= A1[i];
    }
    printf("Enter %d numbers of second array:\n",n);
      for(i = 0; i < n; i++){
            printf("%d",A2[i]);
      }

}
