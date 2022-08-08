#include <stdio.h>
#include <conio.h>

int main () 
{
	int i ; 	
	printf ( "input" ) ;
	scanf ( "%d" ,&i ) ;  // input integer
	if ( i % 4 == 0 ) {
		printf ( "Feb = 29 day" ) ; 
	}                            // end function if
	else printf ( "Feb =28 day" ) ; // end function else
	
	return 0 ; // endfunction main
}0
