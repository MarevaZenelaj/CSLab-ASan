#include <stdlib.h>
int main() {
  void *p = malloc(10);
  return p == nullptr;
}

// $ clang++ -o leak mem-leak.cpp -Wall -g -fsanitize=address
// $ ./leak
