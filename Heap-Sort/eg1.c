/*
This is Heap Sort algorithm 
which is written by me 
this algorithm is written in a simple way
which is very easy to understand.
*/

#include<stdio.h>
#include<stdlib.h>
void heapSort(int *x,int lb,int ub)
{
int ci,ri,lci,rci,swi,g,y,oep;
y=lb+1;
oep=ub;
while(y<=oep)
{
ci=y;
while(ci>lb)
{
ri=(ci-1)/2;
if(x[ci]>x[ri])
{
g=x[ri];
x[ri]=x[ci];
x[ci]=g;
ci=ri;
}
else
{
break;
}
}
y++;
}
while(oep>lb)
{
g=x[lb];
x[lb]=x[oep];
x[oep]=g;
oep--;
ri=lb;
while(ri<oep)
{
lci=(ri*2)+1;
rci=lci+1;
if(lci>oep) break;
if(rci>oep)
{
swi=lci;
}
else
{
if(x[lci]>x[rci]) swi=lci;
else swi=rci;
}
if(x[swi]>x[ri])
{
g=x[swi];
x[swi]=x[ri];
x[ri]=g;
ri=swi;
}
else
{
break;
}
}
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
heapSort(x,0,req-1);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}