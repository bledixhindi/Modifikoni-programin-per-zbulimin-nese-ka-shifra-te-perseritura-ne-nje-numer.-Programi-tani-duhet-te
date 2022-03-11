#include <stdio.h>

int main()
{
  int v[10]={0};
  int n;
  printf("Vendos numrin\n");
  if ( scanf("%d", & n) != 1) return -1;
  if ( n <= 0 ) return -1;
  while  ( n > 0)
  {
    ++v[ n%10];
    n /= 10;
  }

  for (n=0; n<10; ++n)
    if ( v[n] )
      printf("%d eshte perseritur %d here\n", n, v[n]);

  return 0;
}
