#include<cstdio>
void dk(char *s,int n)
{
	int pn=n%5;
	if(pn>=1)s[3*8+3]=1;
	if(pn>=2)s[3*8+5]=1;
	if(pn>=3)s[1*8+3]=1;
	if(pn>=4)s[1*8+5]=1;
	if(n>=5)
	{
		for(int k=0;k<5;k++)
			s[5*8+2+k]=1;
	}
}
int main()
{
	
}
