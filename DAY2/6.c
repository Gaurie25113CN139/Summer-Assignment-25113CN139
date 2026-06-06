#include <stdio.h>
int main() {
  int n, rev = 0, rem, original;
  printf("enter a no.: ");
  scanf("%d", &n);
  original = n;  

  while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  } 
  
  printf("reversed no. = %d", rev);
  return 0;
}
