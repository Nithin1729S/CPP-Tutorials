#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x = 5;
switch( x ) {
    case 1:
        printf("LOLXD");
    case 5:
        printf( "x is five!\n" );//this case was successfully executed as the x value matches.SInce no break statement is added the other statements including are also executed unless the control finds a break statement.This is called fall thru..
    case 2:
        printf( "x is two!\n" );
        break;
    default:
        printf( "I don't know about x\n" );//This wont be printed as the control found a break statement in the case 2
}
}