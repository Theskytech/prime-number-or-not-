#include <stdio.h>
void  main() {
  int n, i, f= 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    f = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      f = 1;
      break;
    }
  }

  // f is 0 for prime numbers
  if (f == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}