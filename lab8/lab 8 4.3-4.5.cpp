#include <stdio.h>


int main()
{
	
	//4.3 this print arr
	int num[4] = {17,28,9,16} ;
	printf("%d %d %d %d\n----------\n",num[0], num[1], num[2], num[3]) ;
	
	
	
	//4.4this is scanf to arr 
	int Arr[100],n,i ;
	printf("Enter youArr :");
	scanf("%d", &n) ;
	for (i=0;i<n;i++){
		printf("Enter younumber[%d] ",i );
		scanf("%d", &Arr[i]) ;
	}
	for (i=0;i<n;i++){
		printf("%d ", Arr[i]) ;
	}

	
	
	//4.5 input 99 to arr
	int Arr[100],n,i ;
	printf("input Arr size :") ;
	scanf("%d", &n) ;
	for(i=0 ;i<n;i++){
	 Arr[i]=99 ;
	}
	for (i=0;i<n;i++){
		printf("Arr[%d] %d ",i, Arr[i]) ;
	}
	return 0 ;

} //endfunction main
