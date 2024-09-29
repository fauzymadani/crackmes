#include <stdio.h>
#include <string.h>

unsigned int simple_hash(char *str) {
  unsigned int hash = 0;
  while (*str) {
    hash = (hash << 5) + *str++;
  }
  return hash;
}

int main() {
  char password[20];
  printf("Enter password: ");
  scanf("%19s", password);

  if (simple_hash(password) == 0x5f4dcc3b) { // Example hash
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
