#include <stdio.h>

int main(void) {
  int Count, Counter;
  printf("Enter the number to print natural numbers upto that number: ");
  scanf("%d", &Count);
  printf("The natural numbers upto %d are ", Count);
  for(Counter = 1; Counter <= Count; Counter++) {
    printf(" %d", Counter);
  }
  printf(".");
  return 0;
}
