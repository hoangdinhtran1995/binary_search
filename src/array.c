#include <stdio.h>
int main() {

	int n;
	int k;
	int A[100000];

  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0;
  ub = n-1;

  if (A[ub] < k)
	  printf("%d", n);
  else
  {
	  while (ub - lb > 1) {
		  int m = (lb + ub) / 2;
		  if (A[m] < k)
			  lb = m;
		  else
			  ub = m;
	  }
	  printf("%d", ub);
  }
  return 0;
}
