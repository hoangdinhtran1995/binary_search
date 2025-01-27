#include <stdio.h>

int n;
int k;
int A[100000];

unsigned int p(int m){
  int current_amount = 0;
  int i;

  for(i=0;i<n;i++){
    current_amount += A[i] / m;
  }

  return(current_amount < k);
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0;
  ub = 1000000001;

  while (ub - lb > 1) {
	  int m = (lb + ub) / 2;
	  if (p(m))
		  ub = m;
	  else lb = m;
  }
  
  printf("%d\n", lb);

  return 0;
}
