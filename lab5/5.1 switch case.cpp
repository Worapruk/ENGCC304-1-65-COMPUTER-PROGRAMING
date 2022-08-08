#include <stdio.h>

int main () {
	int y , z ;
	printf ( "input year = " ) ;
	scanf ( "%d",&y ) ;
	z = y % 4  ;
	switch (z) {
		case 0 :
			printf ( "Feb = 29 day" ) ;
			break ;
		default :
			printf ( "Feb = 28 day2" ) ;
			break ;
	}										//end function switch
	return 0 ;
}											//end function main
