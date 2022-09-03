/*
This is Bubble Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/

#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *x,int size)
{
int m,e,f,g,oep,iep;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
m--;
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
bubbleSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}