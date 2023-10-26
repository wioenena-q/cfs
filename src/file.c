#include "include/file.h"

char* cfs_read_file(const char* path) {
  FILE* f = fopen(path, "r");
  if (f == NULL)
    return NULL;

  fseek(f, 0, SEEK_END);
  size_t file_size = ftell(f);
  fseek(f, 0, SEEK_SET);
  char* buf = (char*) malloc(file_size + 1);
  buf[file_size + 1] = '\0';
  fread(buf, 1, file_size, f);
  fclose(f);
  return buf;
}
