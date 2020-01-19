#include <stdio.h>
int ans[1000002];
#define MAX 1000002
int size;
void multiply(int n)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int p = n*ans[i] + carry;
		ans[i] = p%10;
		carry = p/10;
	}
	while(carry)
	{
		ans[size++] = carry%10;
		carry/=10;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	size=1;
	ans[0]=1;
	ans[1]=-1;
	for(int i=2;i<=n;i++)
	{
		multiply(i);
	}
	for(int i=size-1;i>=0;i--)
	{
		printf("%d",ans[i]);
	}
}