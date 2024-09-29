#include <stdio.h>
#include <string.h>

int main() {
  char password[20];
  printf("Enter password: ");
  scanf("%19s", password);

  if (strcmp(password, "level1pass") == 0) {
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
