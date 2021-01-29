#include <stdio.h>

#include <conio.h>

int main ()

{

int num,i, flag = 0;

printf ("\n Enter the number: ");

scanf ("%d", &num);

for(i=2;i<num/2;i++)
{

if(num%i==0)
{

flag=1;
 break;
}
}
if(flag==1)
printf ("\n the number is not prime",num);
else
printf ("\n the number is prime",num);

return 0;

}
