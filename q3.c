#include <stdio.h>
/*  1. enum
--
enumerate
enum state {S1, S2, S3};  then S1=0; S2=1; S3=2;
enum state vstate;
then vstate can only be S1/S2/S3;
2. getchar(): similar to fgetc() but use stdin as its input file.
*/
void main() {
  enum state { S1, S2, S3 };
  enum state current_state = S1;
  enum state states[3][2] = {{S2, S1}, {S3, S1}, {S3, S3}};
  int c = getchar();
  int x = -1;
  int y = -1;
  while (c != '\n') {
    if (c == 'a')
      current_state = states[current_state][0];
    else if (c == 'b')
      current_state = states[current_state][1];
    c = getchar();
  }
  if (current_state == S3)
    printf("String Accpted\n");
  else
    printf("String rejected\n");
}
