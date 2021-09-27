#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int total = 0;
  int i = 0;

  while (i < argc) {
    total += atoi(argv[i]);
    i++;
  }

  printf("total = %d\n", total);
  return 0;
}