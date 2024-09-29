#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  char password[20];
  char salt[] = "randomsalt";
  printf("Enter password: ");
  scanf("%19s", password);

  strcat(password, salt);

  if (strcmp(password, "mypasswordrandomsalt") == 0) {
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
