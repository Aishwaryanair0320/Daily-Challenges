#include <stdio.h>

int main(void) {
	int A[5][5];
	int i,j;
	int a,b;
	int ans;
	for(i=0;i<5;i++){
	    for(j=0;j<5;j++){
	        scanf("%d",&A[i][j]);
	        if(A[i][j]== 1) {
	         a= i;
	         b=j;
	}
	    }
	}
	
	ans=abs(a-2)+(abs(b-2));
	printf("%d",ans);
	return 0;
}

