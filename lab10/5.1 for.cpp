#include <stdio.h>
#include <string.h>

int main() {
	 char Name[10],i,j ;
	
		printf ( "input :" ) ;
		gets ( Name ) ;
		int n=strlen(Name) ;
		printf ( "Result :" ) ;
		for ( j=0 ; n>=j ; n-- ) {
		
		printf ( "%c" , Name[n] ) ;
	}  //end function for
	

	return 0 ;
} //end functionprintf("Result");
