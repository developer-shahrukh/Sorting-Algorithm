/*
This is Pancake Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/


void pancakeSort(int *x,int lb,int ub)
{
int y,largestIndex,largest,f,g;
while(ub>lb)
{
y=lb;
largest=x[lb];
largestIndex=y;
while(y<=ub)
{
if(x[y]>largest)
{
largest=x[y];
largestIndex=y;
}
y++;
}
y=lb;
while(y<=largestIndex)
{
if(y<largestIndex)
{
g=x[largestIndex];
x[largestIndex]=x[y];
x[y]=g;
}
y++;
largestIndex--;
}
y=lb;
f=ub;
while(y<=ub)
{
if(y<f)
{
g=x[y];
x[y]=x[f];
x[f]=g;
}
y++;
f--;
}
ub--;
}
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *x,y,req,lb;
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
printf("Unable to allocate memory for numbers %d\n",req);
return 0;
}
lb=0;
y=lb;
for(y=lb;y<req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
pancakeSort(x,lb,req);
for(y=lb;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}