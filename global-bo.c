int a[100];
int main(int argc, char **argv) {
  return a[argc + 100];
}

// $ clang -o global global-bo.c -Wall -g -fsanitize=address
// $ ./global
