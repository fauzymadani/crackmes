#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void obfuscated_check(char *password) {
  // Obfuscated XOR encryption
  char encrypted[] = {0x71, 0x7A, 0x6F, 0x7B,
                      0x6E, 0x72, 0x00}; // encrypted "secret"
  for (int i = 0; password[i] != '\0'; i++) {
    password[i] ^= (i + 5);
  }

  if (strcmp(password, encrypted) == 0) {
    printf("Obfuscated password correct!\n");
  } else {
    printf("Obfuscated password incorrect!\n");
    exit(1);
  }
}

int time_based_check() {
  time_t current_time = time(NULL);
  struct tm *time_info = localtime(&current_time);

  // Verification only works if current time is an even second
  if (time_info->tm_sec % 2 == 0) {
    return 1;
  } else {
    printf("Access only allowed on even seconds! Try again.\n");
    return 0;
  }
}

int main() {
  char password[20];

  printf("Enter password: ");
  scanf("%19s", password);

  // First, pass the obfuscated check
  obfuscated_check(password);

  // Then, pass the time-based check
  if (time_based_check()) {
    printf("Final access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
