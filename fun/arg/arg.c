#include <stdarg.h>
#include <stdio.h>

int sum(int numOfArgs, ...) {
  va_list args;
  va_start(args, numOfArgs);

  int sum = 0;
  for (int i = 0; i < numOfArgs; i++) {
    sum += va_arg(args, int);
  }
  va_end(args);

  return sum;
}

int main() {
  sum(3, 14, 29, 46);
  return 0;
}
