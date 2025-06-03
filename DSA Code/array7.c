#include <stdio.h>
int main() {
int A[4], i, x;
for (i = 0; i < 4; ++i) {
scanf("%d", &A[i]);
}
x = A[0];
for (i = 1; i < 4; ++i) {
if (A[i] > x) {
x = A[i];
}
}
printf("\nMaximum is %d", x);
return 0;
}
