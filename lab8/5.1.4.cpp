#include <stdio.h >

int main() {
	 int arr [100] ;
	 int n ,i=1, a, check ;
	 printf("input Arr Size :" ) ;
	 scanf ("%d", &n) ;
	 while(i <= n) {
	 	printf ("Arr[%d] ",i) ;
	 	scanf("%d" , &arr[i]) ;
	 	i++ ;
	 } // end while loop
	 printf("Unique = ") ;
	 i=n ;
	 while (i> 0) {
		check = 0 ;
		a=n ;
		while (a >0) {
			if( i !=a && arr[i]==arr[a]) {
				check = 1 ;
			} //end if
			a-- ;
		} //end while in 
		if (check == 0) {
		printf("%d" ,arr[i]) ;
	} // end if
	i--; 
	 }//end while
	
	return 0 ;
} // end function
