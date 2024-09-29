#include <stdio.h>
#include <string.h>

int main() {
  FILE *file;
  char key[20];

  file = fopen("keyfile.txt", "r");
  if (file == NULL) {
    printf("Key file missing.\n");
    return 1;
  }

  fscanf(file, "%19s", key);
  fclose(file);

  char password[20];
  printf("Enter password: ");
  scanf("%19s", password);

  if (strcmp(password, key) == 0) {
    printf("Access granted!\n");
  } else {
    printf("Access denied!\n");
  }

  return 0;
}
