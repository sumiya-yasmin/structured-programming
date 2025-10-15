#include<stdio.h>
void print_from_N_to_1(int n, int i){
  if(i==0){
    return;
  }
  printf("%d ", i);
  print_from_N_to_1(n, i-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_from_N_to_1(n, n);
    return 0;
}