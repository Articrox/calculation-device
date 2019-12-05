#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */
#include "termiobx.h"
void SysInit(void);
void Division(void);
void Power (void);
void SquareRoot (void);
void factorial (void);
void GCD (void);
void PowerOfB (void);
void main(void) {
  /* put your own code here */
   SysInit();
   for(;;) {
 // int selection 
   
   
  printf("Welcome to your calculation device\n\r Please make your selection");    //Promt to ask user to make a selection based on the calculation the user wants to be done. 
  Top:
  while ( PORTA==0){
       //selection =PORTA;
  }
   
  if (PORTA==1)                              //Depending on the selection chosen it will the program to go to a function, there is one functions per choice of operation. 
    Division();
      else if( PORTA ==2)
        Power();
      else if (PORTA ==4)
        SquareRoot();
      else if ( PORTA ==8)
        PowerOfB();
      else if(PORTA ==16)
        factorial();
      else if ( PORTA ==32)
        GCD();
       else {                               // If the user makes an invalid selection  the program will ask again until the user makes an adecuate selection. 
    
    printf("Your selection has been invalid, Please try again \n\r Enter your selection  ");
    goto Top;
  }
  
    

	EnableInterrupts;


  
   
  } /* loop forever */
  /* please make sure that you never leave main */
}

//Program for division
void Division(void){
     int  A;
     int B;
     int C;
     
   printf(" You have selected division, where you will be dividing A by B.\n\r please enter A ");
   
  scanf("%d", &A);
  
  printf("\n\rnow enter B  ");
  scanf("%d", &B);
  
  
   // printf("\nPlease enter a valid value  B ");
     
 printf(" \n\rYou selected %d for B and %d for A", B,A); 
C = A * B; 
    
 printf(" \n\rThe result of your division is  = %d\n ", C);  
  
}
//Program for Power
void Power (void){
     printf("\n\rYou have selected power");
}
 //Program for Square Root
void SquareRoot (void){
     printf("\n\rYou have selected Squareroot");
}
//Program for PowerOfB
void PowerOfB (void){
     printf("\n\rYou have selected Squareroot");
}
//Program for factorial
void factorial (void){
     printf("\n\rYou have selected Factorial ");
}
//Program for GCD
void GCD(void){
     printf("\n\rYou have selected Greatest Common Denominator");
}
void SysInit(void){ 
DDRA= 0; 
 COPCTL = 0x00;  // normally one-time writable  
 TERMIO_Init(9600); 
 
 }
