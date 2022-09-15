#include <stdio.h>


int main() {
  

  char ch;
  int char_count = 0, line_count = 0;
  int in_word = 0;
  char file_name[1024];
  FILE *fp;

  printf("Enter a file name: ");
  scanf("%s", file_name);
  fp = fopen(file_name, "r");

  if(fp == NULL) {
    printf("Could not open the file %s\n", file_name);
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    char_count++;
    if(ch == '\n') ++line_count;
  }

  if(char_count>0) ++line_count;
  printf("In the file %s:\n", file_name);
  printf("Number of characters: %d.\n", char_count);
  printf("Number of lines: %d.\n", line_count);

  return 0;
}