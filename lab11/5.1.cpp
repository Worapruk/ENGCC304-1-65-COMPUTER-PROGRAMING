#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char DetectOperator(char InputArr[], int ) ;
int GetResult (int);
void change(char) ;
int main() {
	 int total ;
	char InputArr[20],n, sum;
	printf("input :")  ;
    scanf("%d %c %d", &InputArr[0], &InputArr[1], &InputArr[2]) ;
	DetectOperator(InputArr,total) ;
	void change(char *sum) ;
	GetResult(total) ;
	return 0 ;
} // end function main



char DetectOperator(char InputArr[], int total){
	int sum = 0 ;
	if(InputArr[1]=='+' )     sum =InputArr[0]+InputArr[2]  ; // end if
	else if(InputArr[1]=='-') sum = InputArr[0]-InputArr[2] ; // end else if
	else if(InputArr[1]=='*') sum = InputArr[0]*InputArr[2]  ;// end else if
	else if(InputArr[1]=='/') sum = InputArr[0]/InputArr[2]  ;// end else if
	total = sum ;
	
	printf ("%d %c %d = %d",InputArr[0],InputArr[1],InputArr[2],total);
	
} // endfunction opt
int GetResult( int total){
 return (total);
} // end get 

