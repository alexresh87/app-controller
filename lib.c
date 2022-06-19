#include <stdio.h>
#include "functions.h"

#ifdef __cplusplus
extern "C" {
#endif

void run(void) {
  printString("Hello, world!\r\n");
  printf("Hello...\r\n");
}

#ifdef __cplusplus
}
#endif