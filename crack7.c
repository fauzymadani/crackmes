#include <stdio.h>
#include <string.h>

int main() {
  char password[20];
  printf("Enter password: ");
  scanf("%19s", password);

  for (int i = 0; i < strlen(password); i++) {
    password[i] ^= (i + 3); // Complex XOR with position
  }

  if (strcmp(password, "encrypted") == 0) {
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
