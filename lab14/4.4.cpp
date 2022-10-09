#include <stdio.h>


int main () {
	int n,i ;
	int min = 99999 ;
	int N[i] ;
	printf ( "input line " ) ;
	scanf( "%d", &n ) ;
	for(i ; i<n ; i++) {
		printf ( "input arr " ) ;
		scanf ( "%d" ,&N[i]) ;
		if (N[i]<min){
			min = N[i] ;
		} //end if
	} // end for loop
	printf("min = %d",min) ;
	return 0 ;
} // end function main
