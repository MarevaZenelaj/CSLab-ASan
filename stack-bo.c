int main(int argc, char **argv) {
  int a[100];
  return a[argc + 100];
}

// $ clang -o stack stack-bo.c -Wall -g -fsanitize=address
// $ ./stack
