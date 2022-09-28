#include <stdio.h>
#include <string.h>

int main() {
	 char Name[10],i,j ;
	
		printf ( "input :" ) ;
		gets ( Name ) ;
		int n=strlen(Name) ;
		printf ( "Result :" ) ;
		bool condition =true ;
		while (condition) {
			if(n>=j){
					printf ( "%c" , Name[n] ) ;
				}
			else {
				condition = false ;
			}
			
			n-- ;
		}//end function while
	

	return 0 ;
} //end functionprintf("Result");                                                                                                                                                                                     
