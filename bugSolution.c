/*
 * No specific solution is needed as the code works as intended for demonstrating pointer functionality.
 * However, adding comments to the code improves readability and explains the behavior:
 */

#include <stdio.h>

int main() {
  int x = 10; // Initialize integer x
  int *ptr = &x; // Get address of x and assign it to ptr
  *ptr = 20; // Modify x through pointer; x is now 20
  int y = *ptr; // Assign value pointed to by ptr to y; y is 20
  int z = x; // Assign value of x to z; z is 20

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);

  return 0;
} 