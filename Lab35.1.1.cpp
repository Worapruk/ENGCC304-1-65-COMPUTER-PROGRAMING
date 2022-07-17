#include <stdio.h>
#include <conio.h>

int main()
{
	char c; 		       // chacter = c
	float ff; 		      // float = ff
	int i; 				  // integer = i
		printf ( "input1 :" ) ;
		scanf ( "%d" ,&i ); // input integer
		fflush ( stdin ) ;
		printf ( "input2 :" ) ;
		scanf ( "%f" ,&ff ) ; // input float
		fflush ( stdin ) ;
		printf ( "input3 :" ) ;
		scanf ( "%c" ,&c ) ; // input chacter
		fflush ( stdin ) ;
	   printf ( "%d %.2f %c",i,ff,c ) ;
	return 0 ;
}  						//end function main
