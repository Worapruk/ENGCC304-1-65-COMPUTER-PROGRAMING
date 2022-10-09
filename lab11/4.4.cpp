#include <stdio.h>
int function_by_pass ( int n ) ;
void function_by_referrance ( ) ;

int main ( ) {
	int n ;
	n = function_by_pass ( n ) ;
	function_by_referrance ( ) ;
	printf ( "\n%d" , n ) ;
	
	
	
	return 0 ;
} //end function main

int function_by_pass(int n) {
	n= 10 ;
	
	return n ;
}//endfunction  by pass

void function_by_referrance () {
	printf ( "Hello teacher " ) ;
}//end function referrance
