/*
This is Linear Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/

#include<stdio.h>
#include<stdlib.h>
void linearSort(int *x,int size)
{
int e,f,g,iep,oep;
oep=size-2;
iep=size-1;
e=0;
while(e<=oep)
{
f=e+1;
while(f<=iep)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;
}
e++;
}
}
int main()
{
int *x,y,req;
printf("Enter your requirement :");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirement");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for numbers %d\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
linearSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}