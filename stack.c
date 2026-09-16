#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop();
void print();
int opt,item;
do{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("Enter your item:");
scanf("%d",&item);
push(item);
break;
case 2:
item=pop();
if(item!=-9)
printf("popped value=%d\n",item);
break;
case 3:
print();
break;
case 4:
exit(0);
}
}
while(1);
}
//function push
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full.......");
return;
}
else
stk[++sp]=x;
return;
}
//funtion pop
int pop()
{
if(sp==-1)
{
printf("stack is empty......\n");
return -9;
}
else
return stk[sp--];
}
//funtion to display the elements
void print()
{
int i;
if(sp==-1)
printf("stack is empty...");
else
for(i=0;i<=sp;i++)
printf("%d\t",stk[i]);
return;
}

