void foo(int *x);
int main() {
  int x = 3;
  printf("%p: %d\n", &x, x);
  foo(&x);
  printf("%p: %d\n", &x, x);
  return 0;
}
void foo(int *x) {
  *x = *x + 1;
  printf("%p: %d !\n", x, *x);
}
