#include <stdio.h>

int main () {
	int n ,i=0;
	int max= -99999 ;
	int Num[i] ;
	printf("Input line :") ;
	scanf("%d", &n) ;
	for( i=0 ; i < n ; i++) {
			printf("Input Arr :") ;
			scanf("%d", &Num[i]) ;
			if (Num[i]>max){
				max=Num[i] ;
			} // end if
	} // end for loop
	printf ("\n%d" ,max ) ;
	
	
	return 0 ;
}
