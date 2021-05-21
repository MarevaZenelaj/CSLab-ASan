int main(int argc, char **argv) {
  int a = (int*) malloc(10* sizeof(int));
  free(a);
  free(a);
}
