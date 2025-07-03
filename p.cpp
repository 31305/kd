#include<cstdio>
void dk(void(*s)(int,int),int n)
{
	int pn=n%5;
	if(pn>=1)s(3,3);
	if(pn>=2)s(3,5);
	if(pn>=3)s(1,3);
	if(pn>=4)s(1,5);
	if(n>=5)
	{
		for(int k=0;k<5;k++)
			s(5,2+k);
	}
}
int main()
{
	
}
