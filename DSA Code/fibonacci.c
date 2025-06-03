#include<stdio.h>
int fibonacci(int n) {
if (n == 0)
return 0;
else if (n == 1)
return 1;
else
return (fibonacci(n - 1) + fibonacci(n - 2));
}
int factorial(int n) {
if (n == 0)
return 1;
return n * factorial(n - 1);
}

int main() {
int n = 7;
int i;
printf("Factorial of %d: %d\n", n, factorial(n));
printf("Fibonacci sequence up to %d: ", n);
for (i = 0; i < n; i++) {
printf("%d ", fibonacci(i));
}
printf("\n");
}
