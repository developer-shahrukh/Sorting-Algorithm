/*
This is Coctail Shacker Sort(Bidirectional bubble sort) algorithm 
Which is written by me 
This algorithm is written in a simple way
Which is very easy to understand.
*/



#include<stdio.h>
#include<stdlib.h>
void coctailSort(int *x,int lb,int ub)
{
int e,f,g,iep;
iep=ub-2;
while(lb<ub)
{
e=lb;
while(e<=iep)
{
f=e+1;
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
ub--;
f=ub;
e=f-1;
while(e>=lb)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e--;
f--;
}
lb++;
}
}
int main()
{
int *x,req,y;
printf("Enter your requirement :");
scanf("%d",&req);
if(req<0)
{
printf("Invalid requirement\n");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to aloocate memory for %d numbers\n",req);
return 0;
} 
y=0;
while(y<req)
{
printf("Enter a number :");
scanf("%d",&x[y]);
y++;
}
coctailSort(x,0,req);
y=0;
while(y<req)
{
printf("%d\n",x[y]);
y++;
}
free(x);
return 0;
}
