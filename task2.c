#include <stdio.h>
void printNumbers(int x, int y);
void main (){
int x,y;

printf("enter range (x,y) :");

scanf("%d%d",&x,&y);

printNumbers(x,y);

}
void printNumbers(int x, int y)
{
if (x==y)
printf ("%d ",x);
else if (x>y){
printf("%d ",y);
printNumbers(y+1,x);}
else
{
printf("%d ",x);
printNumbers(x+1,y);}
}
