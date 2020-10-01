#include<stdio.h>

int operate(int,int);

int main(int argc, char** argv)
{
  int iNumber1, iNumber2 ,iResult;
  printf("Give 1st number\n");
  scanf("%d",&iNumber1);
  printf("Give 2nd number\n");
  scanf("%d",&iNumber2);
  iResult=operate(iNumber1,iNumber2);
  printf("Subtraction of %d from %d is %d\n",iNumber2,iNumber1,iResult);
  return(0);
}
int operate(iNumber1,iNumber2)
{
/*  Here return Subtraction of two number (iNumber1-iNumber2) */
    
}
