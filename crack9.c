#include <stdio.h>
#include <string.h>

int stage1(char *password) {
  // First stage verification
  return strcmp(password, "stage1key") == 0;
}

int stage2(char *password) {
  // Second stage with XOR encryption
  for (int i = 0; i < strlen(password); i++) {
    password[i] ^= 0x44;
  }
  return strcmp(password, "stage2encrypted") == 0;
}

int main() {
  char password[20];
  printf("Enter password for stage 1: ");
  scanf("%19s", password);

  if (stage1(password)) {
    printf("Stage 1 passed!\n");
    printf("Enter password for stage 2: ");
    scanf("%19s", password);

    if (stage2(password)) {
      printf("Access granted, all stages passed!\n");
    } else {
      printf("Stage 2 failed!\n");
    }
  } else {
    printf("Stage 1 failed!\n");
  }

  return 0;
}
