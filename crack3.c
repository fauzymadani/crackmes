#include <stdio.h>

int main() {
  int input;
  printf("Enter number: ");
  scanf("%d", &input);

  if (input * 3 + 5 == 20) {
    printf("Correct number, access granted!\n");
  } else {
    printf("Wrong number, access denied!\n");
  }

  return 0;
}
