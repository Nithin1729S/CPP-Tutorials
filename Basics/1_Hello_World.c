#include <stdio.h> //Standard input output function.They allow you to group different functionality in your program  
#include <stdlib.h>
int main()  //The entry point of the C program 
{
printf("Hello World!\n");
printf("He\nllo\n World!\n");
printf("Hello \"World!\n");   //escape sequence 
return 0;
}

// A C program is made up of tokens
// Tokens can be a keywords,identifier,string literal,constant,symbols etc
// Keywords are reserved words in C program.Ex:char,int,return,else,break,long,  .These words cant be used to make variable,identifier etc
// Identifier can be the name of  a variable ,function used to identify them
// c is a case sensitive language
// C doesnt allow punctuation characters as identifiers
// Semicolon is used to terminate a code statement
//There must me atleast one wide space character between tokens

/* Variable is a name given to a memory location.Declared by writing type_variable_name  Example int a; or int a , b,c,d; 
Initialized and declared by type_variable_name =Value.*/
// Compiler will reserve space for the declered variables (memory occupied by variable type * number of variables)



// Rules for defining a variable
/* 1) Can contain alphabets ,digits amd underscore
   2)A variable name can start with an alphabet and underscore only.
   3)Cant start with a digit
   4)No whitespace and reserved keywords are allowed
   5)Invalid variable names :$harry. 77harry , char long*/

// Data Types in C
/* 1)Basic Data types : int ,float,char,double
   2)Derived Data Types : array,pointer.structure,union
   3)Enumeration Data Type: emum
   4)Void Data Type : void*/

// Datatypes and size occupied by it(32 bit architecture)varies by architecture NTR
/* 1) char  : 1 byte
   2)signed char : 1 byte
   3)unsigned char : 1 byte
   4)short : 2 byte
   5) signed short: 2 byte 
   4) unsigned short : 2 byte
   6) short int : 2 byte 
   7)signed short int : 2 byte
   8) unsigned short int : 2 byte
   9) long int : 4byte
   10)signed long int : 4 byte
   11)unsigned long int : 4 byte 
   12) float : 4 byte
   13)double : 8 byte
   14) long double : 10 byte

Use float,double for decimals    
Program to find size of a variable is in size.c   */


/* Basic operators : + - * /
 
 printf("%d",3+7);  will print 10
 scanf("%d",&a); will take input from user and stores it in a */

 



