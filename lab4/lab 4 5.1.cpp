#include <stdio.h>
#include <conio.h>


int main()
{
    char employees_id[10];               // character = employess_id
    float w, money,Salary;  		     // float = w, m,Salary
    

    printf("Input the Employees ID :");  // output  Input the Employees ID :
    scanf ("%s",&employees_id);          // input %s in employess_id
    fflush(stdin); 						 // fflush(stdin)
    printf ("In put the working :");     // output In put the working :
    scanf ("%f",&w);					 //input %f in w
    fflush(stdin);						 //fflush(stdin)
    printf("Input the Salary amount/hr :");//output Input the Salary amount/hr :
    scanf("%f",&Salary); 				 //input %f  in Salary
    fflush(stdin);                        //fflush(stdin)
  
    money=w*Salary;							//  def money =  w*Salary
    
    printf("Employees ID = %s \nAmount/day = %.2f bath(s)",employees_id,money);  //print Employees ID = %s \nAmount/day = %.2f bath(s) ,employees_id,money


    return 0;
} // endfunction main

