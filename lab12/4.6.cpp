#include <stdio.h>
#include <string.h>

struct studen{
	char name [150] ;
	int  age  ;
 } typedef st ;


int main () {
	int i , n ;
	st  number [i] ;
		printf("enter you studen all :") ;
		scanf("%d", &n) ;
	for (i=0 ; i<n ;i++) {
		printf ( "enter your studen name :" ) ;
		scanf  ( "%s", &number[i].name ) ;
		printf ( "enter your studen age  :" ) ;
		scanf  ( "%d", &number[i].age ) ;
	} //end for
	for (i=0 ; i<n ;i++) {
	
	printf(" \n -------------\n number[%d] name %s age %d ",i+1,number[i].name,number[i].age) ;
} //endfor
	
	return 0 ;
} // end function
