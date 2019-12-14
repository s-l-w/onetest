#include <stdio.h>
#include <stdlib.h>


int main ()
{int num(char a[]);
int i,k,(*p)(char a[]);
char b[100];
    gets(b);
p=num;
k=(*p)(b);
printf("%d",k);
return 0;
}
int num(char a[])
{int n,l;
for(n=0;a[n]!=0;n++)
{
    l=n+1;
}
return(l);}
