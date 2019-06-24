#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  // Find abundance of bags and who needs them
  int b = k - n ; //b bags
  int stop = n - b;
  int i = n;
  while (i > stop) {			
	  int y = A[i] / b;
	  if (y > A[i-1])

	  

  }


  //while (ub - lb > 1) {
	//  int m = (lb + ub) / 2;
	  //if (A[m] < k)
		//  lb = m;
	 // else
		//  ub = m;
  //}
  return 0;
}
