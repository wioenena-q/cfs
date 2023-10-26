#include "include/file.h"

int main(void) {
  char* contents = cfs_read_file("src/main.c");
  printf("contents: %s\n", contents);
  free(contents);
  return 0;
}
