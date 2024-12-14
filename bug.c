int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20;
  int y = *ptr; // y will be 20
  int z = x; // z will also be 20 because x was modified using ptr

  return 0;
}