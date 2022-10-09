#include <stdio.h>
#include <string.h>
 
int count = 0;
 
struct Emp {
 char name[ 500 ] ;
 int salary ;
 int year ;
} typedef  emp;
void input_struct( Emp [], int ) ;
void output_struct( Emp [], int) ;
 
int main() {
	int n = 100 ;
	Emp inputArr[ n ] ;
 	input_struct( inputArr,n ) ;
 
 	output_struct( inputArr, count ) ;
 	return 0 ;
} // end function main
 
void input_struct(Emp InputArr[], int n) {
int i = 0 ;
char c ;
bool condition ;
do {
 		printf( "Do you want to Enter Employee Information? (Y/N) : " ) ;
 		scanf( "%s", &c) ;
 		switch( c ){
 			case 'n' : 
 				condition = false ;
 				break ;
 			case 'y' :
 				condition = true ;
 				printf( "Employee Name : " ) ;
 				scanf( "%s", &InputArr[ i ].name ) ;
 				printf( "Salary (Bath/Month) : ") ;
 				scanf( "%d", &InputArr[ i ].salary );
 				printf( "Duration (Year) : " ) ;
 				scanf( "%d", &InputArr[ i ].year) ;
 		i++;
 		count++;
 		}
    } while (condition) ;
}
void output_struct( Emp InputArr[], int n ) {
	// find payment
 	float sum = 0;
 	int i = 0 ;
 	while( i < n ) {
 		sum = sum + InputArr[ i ].salary ;
 		i++ ;
 	}
 
 	//  average
 	float average = 0;
 	average = sum / count ;
 	printf( "\nAverage of Salary : %.2f Bath", average ) ;
 	printf( "\nPayment of every month : %.2f Bath" , sum ) ;
 
 	// duration
 	int max = 0, d = 0;
 	i = 0 ;
 	while( i < count ) {
 		while(InputArr[ i ].salary > max) {
 			max = InputArr[ i ].salary ;
 			d = i ;
 			break ;
 		}
 	i++ ;
 	} // end while  duration
 	printf( "\n** Most duration in this business **" );
	printf( "\nName : %s (%d Years)\nSalary : %d Bath", 
 	InputArr[ d ].name,
 	InputArr[ d ].year,
 	InputArr[ d ].salary
 	);
} // end out struct
 

