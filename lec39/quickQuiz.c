/*
 * suppose this a union
 *  union test {
 *  int a;
 *  float b;
 *  char c;
 *  } dd;
 *
 *  question is how much memory space will this union data type get? if it was structure then how many memory space it will get?
 *
 *  answer:- 
 *  in my architecture,
 *  int ==> 2 byte
 *  float ==> 4 byte
 *  char ==> 1 byte
 *
 *  so, union will get the largest 4 byte
 *  if, it was structure it will get 1+2+4=7 byte 
 */
#include <stdio.h>

int main()
{
    printf("\n");
    return 0;
}

