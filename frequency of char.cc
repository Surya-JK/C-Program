#include<stdio.h>
int main()
{
	int num[]={1,2,3,3,4,5,5};
	int len=sizeof(num)/sizeof(num[0]);
	int freq[256]={0},i;
	for(i=0;i<len;i++)
	{
		freq[num[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]>0)
		{
			printf("the frequency of %d is %d\n",i,freq[i]);
		}
	}
	return 0;
}
