#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<string.h>
#define Max 100000
int stack[Max],stack2[Max],s=0;
void push(int val)
{
	stack[s]=val;
	stack2[s++]=0;

}
void pop()
{
	s--;
}

int main()
{
	int n,i,d=0,s2;
	long P[Max];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%ld",&P[i]);
		s2=0;
		while(s>0 && P[stack[s-1]] >= P[i])
		{
			pop();
			s2=1;
		}
		while(s>01 && stack2[s-2] <= stack2[s-1] && s2==1)
			pop();
		if (s>0)
		{
			stack2[s-1]++;
			d=(d>stack2[s-1])?d:stack2[s-1];
		}	
		push(i);
		
	}
	printf("%d",d);
	return 0;
}
