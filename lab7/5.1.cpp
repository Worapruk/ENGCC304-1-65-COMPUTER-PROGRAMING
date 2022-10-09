#include <stdio.h>
int main (){
	int n = 0 ;
	printf ( "Input :") ;
	scanf("%d" , &n) ;
	while (n>=0) {
		if (n==7|| n==5 || n==3 || n==2) {
			printf("%d\t" , n) ;
			
		} // end if
		else if (n %7!=0 && n%5!=0 &&n%3!=0&&n%2!=0) {
			printf("%d\t",n) ;
		} //end else if
		n-- ;
	} //end while loop
return 0 ;
} //end function main
