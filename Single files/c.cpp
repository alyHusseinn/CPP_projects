#include <unistd.h>
#include <stdio.h>
#include <dos.h>
#include <stdlib.h>
//#include "common.h"

int main(int argc, char *argv[])
 {
int *p = new int(sizeof(int)); // a1
 if(p == NULL) return 0;
 printf("(%d) address of p: %08x\n",
 getpid(), p); // a2
 *p = 0; // a3
 while (1) {
 sleep(5);
 *p = *p + 1;
 printf("(%d) p: %d\n", getpid(), *p); // a4
 }
 return 0;
 }