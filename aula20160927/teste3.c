int fatorial(int n);
int main() {
  int n = 4;
  printf("Fatorial %d = %d", n, fatorial(n));
  return 0;
}
int fatorial(int n) {
  return (n == 0 || n == 1)? 1 : n*fatorial(n-1);
}
