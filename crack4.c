#include <stdio.h>
#include <string.h>

int main() {
  char password[20];
  char encrypted_password[] = {0x12, 0x37, 0x3F, 0x72, 0x00}; // XOR encrypted

  printf("Enter password: ");
  scanf("%19s", password);

  for (int i = 0; i < strlen(password); i++) {
    password[i] ^= 0x55; // XOR with key
  }

  if (strcmp(password, encrypted_password) == 0) {
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
