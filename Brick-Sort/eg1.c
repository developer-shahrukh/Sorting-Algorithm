/*
This is Brick (Odd Even) Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/

#include<stdio.h>
#include<stdlib.h>
void brickSort(int *x,int size)
{
int y,e,f,g,k,swapCount,oep,iep;
y=0;
swapCount=0;
iep=size-1;
oep=size-2;
while(y<size)
{
e=1;
while(e<=oep)
{
k=e+1;
if(x[k]<x[e])
{
g=x[e];
x[e]=x[k];
x[k]=g;
swapCount++;
if(swapCount==0) break;
}
e++;
}
f=0;
while(f<=iep)
{
k=f+1;
if(x[k]<x[f])
{
g=x[f];
x[f]=x[k];
x[k]=g;
swapCount++;
if(swapCount==0) break;
}
f++;
}
y++;
}
}
int main()
{
int *x,y,req;
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
printf("Unable to allocate to memory for numbers %d\n",req);
return 0;
}
for(y=0;y<=req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
brickSort(x,req);
for(y=0;y<=req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}
