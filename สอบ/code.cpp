#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct birth {
	int		no   ;
	char	name ;
	int		day  ;
} typedef B ; // struct 

int ReadFileToStrct(B[], int) ;
void ShowStruct(B[],int,int) ;
	
	
int main () {
	int n=100 , Lastline ;
	B input[n] ;
	Lastline = ReadFileToStrct (input,n) ;
	ShowStruct(input,n,Lastline) ;
	return 0 ;
} // end function 


 int ReadFileToStrct(B InputArr[], int n)  {
 	int CountLine = 0 ;
 	int Lastline= CountLine ;
 	FILE *fp;
 	fp = fopen("a.txt","r") ;
 	if (fp==NULL){
 		printf ("\n Error openning file.") ;
 		exit(0) ;
		 
		}
	int i ;
	for(i=0 ; i< n ; i++) {
		if (fscanf(fp,"%d\t %10s\t %d\t \n",InputArr[i].no,
									  &InputArr[i].name,
									  &InputArr[i].day ) !=EOF )
									  CountLine++ ;
		else 
		break ;
	}
	fclose (fp) ; 	

 return CountLine ;		
}

void ShowStruct(B InputArr[],int n,int Lastline)  {
	for(int i = 0 ; i <n ; i++ ) {
		printf("%d %10s %d \n",&InputArr[i].no,
							   InputArr[i].name,
							   &InputArr[i].day ) ;
							   if(i==Lastline -1) break ;
	}
}

