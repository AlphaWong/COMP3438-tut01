# Profile
```
Student name: WONG CHUN KIU
Student id: 14112109d
```

# Question 1
## Code
```c
var
  i,
  a, b, c, d, var1;
begin
i = 1;
a = 5;
b = 6;
while (i < 99)
  do {
    if (i == 1)
      then {
        c = (a + b) / 2.0
        E 12;
        d = a ^ b + 3 E -
          12;
      } else {
      d = a * b + 0.21;
    }
    i = i + 1;
  }
end
```

```
Key words: var, begin, while, do, if, then, else, end
Identifier: i, a, b, c, d, var1
Number: 1, 5, 6, 2.0E-12, 3E-12, 0.21
Operator: =, <, +, /, ^, *,
Delimiter:  blank, newline, tab, ;, {, }, ., (, )
```
# Question 2
1. ```^b[ab]*ba$```
1. ```a*ba*ba*```
1. ```a*bba*```

# Question 3
```c
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
```
