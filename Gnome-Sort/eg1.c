/*
This is Gnome Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/

#include<stdio.h>
#include<stdlib.h>
void gnomeSort(int *x,int size)
{
int j,e,g;
j=0;
while(j<size)
{
if(j==0) j++;
if(j>0)
{
e=j-1;
while(e>=0)
{
if(x[j]<x[e])
{
g=x[e];
x[e]=x[j];
x[j]=g;
j--;
}
e--;
}
}
j++;
}
}
int main()
{
int *x,req,y,j,e,g;
printf("Enter your requirement :");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirement :");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for %d numbers\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
gnomeSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}