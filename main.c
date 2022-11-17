#include <stdio.h>
#include <stdlib.h>
#include "copy.h"


int main() {
  char* str1 = "IOT Hello! int Mdia Laps\n";
  char* str2 = copy(str1);
  
  printf("&s", str2);
  free(str2);
  
  }
