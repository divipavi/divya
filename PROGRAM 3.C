#include<stdio.h>
#include<stdlib.h>
#define max 10
int in sortq(int queue[max],int*rear,int*data)
{
if(*rear=max-1)
return(-1);
else
{
*rear=*rear+1;
queue[*rear]=*data;
return(1);
}
}
int dalq(int queue[max],int*front,int*rear,int*data)
{
if(*front=*rear)
return(-1);
else
{
(*front)++;
*data=queue[*front]
return(1);
}
}
int main()
{
int queue[max],data;
int front,rear,reply,option;
//....int queue
front=rear=-1;
printf("\manu");
printf("\n.....");
printf("\n 1 insert element in queue");
printf("\n 2 delete element from queue");
printf("\n 3 exit");
printf("\n......");
while(1)
{
printf("\n choose operation");
scanf("%d",s operation);
switch(option)
{
case 1://insert
printf("\n enter number:");
scanf("%d",s data);
reply=insertq(queue,srear,sdata);
if(reply=-1)
printf("queue is full");
else
printf("%d is insert inserted in queue\n"data);
break;
case 2://data