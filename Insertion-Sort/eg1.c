/*
This is insertion Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/


#include<stdio.h>
#include<stdlib.h>
void insertionSort(int *x,int lb,int ub)
{
int j,y,z,num,oep;
y=lb+1;
oep=ub-1;
while(y<=oep)
{
num=x[y];
z=y-1;
while(z>=lb && x[z]>num)
{
x[z+1]=x[z];
z--;
}
x[z+1]=num;
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
insertionSort(x,0,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}