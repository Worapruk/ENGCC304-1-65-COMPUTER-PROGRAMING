#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
	char name[100] ;
	int age ;
	float salary ;
	char job[50] ;
} typedef E ;

int ReadFileToStrct(E[], int) ;
void ShowStruct(E[],int,int) ;
 
int main() {
	int n = 100 ,LastLine ;
	E set[n] ;
	
	LastLine = ReadFileToStrct (set,n) ;
	ShowStruct(set,n,LastLine) ;
	
	
	return 0 ;
}


 int ReadFileToStrct(E InputArr[], int n)  {
 	int CountLine = 0 ;
 	int LastLine= CountLine ;
 	FILE *fp;
 	fp = fopen("lab15.txt","r") ;
 	if (fp==NULL){
 		printf ("\n Error openning file.") ;
 		exit(0) ;
		 
		}
	int i ;
	for(i=0 ; i< n ; i++) {
		if (fscanf(fp,"%10s %d %f %10s\n",InputArr[i].name,
									  InputArr[i].age,
									  InputArr[i].salary,
									  InputArr[i].job) !=EOF )
									  CountLine++ ;
		else 
		break ;
	}
 	

 return CountLine ;		
}

void ShowStruct(E InputArr[],int n,int LastLine) {
	FILE *fp;
 	
char Programmer,Support, Advisor,HR,Funder ;
//ax_pro ,max_ad ,max_su ,max_Hr,max_fu ;
	for ( int i = 0 ; i < n ; i++) {
	//f (InputArr[i].job==Programmer){
	//if (InputArr[i].salary > max_pro ){
	//	max_pro = InputArr[i].salary ;
	//}
	//
	fprintf(fp,"%10s %d %f %10s \n " ,InputArr[i].name,
					InputArr[i].age,
					InputArr[i].salary,
					InputArr[i].job ) ;
		if( i== LastLine-1)break ;
	}
	
	
	
}

