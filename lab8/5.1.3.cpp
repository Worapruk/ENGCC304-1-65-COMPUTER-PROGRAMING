#include <stdio.h >

int main() {
	 int arr [100] ;
	 int n ,i, a, check ;
	 printf("input Arr Size :" ) ;
	 scanf ("%d", &n) ;
	 for (i=1 ; i <= n ; i++) {
	 	printf ("Arr[%d] ",i) ;
	 	scanf("%d" , &arr[i]) ;
	 } // end for loop
	 printf("Unique = ") ;
	 for (i=n ; i> 0 ; i--) {
		check = 0 ;
		for (a=n ; a >0 ; a--) {
			if( i !=a && arr[i]==arr[a]) {
				check = 1 ;
			} //end if
		} //end for in for
		if (check == 0) {
		printf("%d" ,arr[i]) ;
	} // end if
	 }//end for 
	
	return 0 ;
} // end function
