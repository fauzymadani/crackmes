#include <stdio.h>
#include <string.h>

int main() {
  char password[20];
  printf("Enter password: ");
  scanf("%19s", password);

  if (strlen(password) == 10) {
    printf("Correct length, access granted!\n");
  } else {
    printf("Incorrect length, access denied!\n");
  }

  return 0;
}
