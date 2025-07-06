#include<cstdio>
#include"pd.h"
#include<string.h>
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
void s(int p,int d)
{
	printf("%d,%d\n",p,d);
}
int main()
{
	if(0)dk(s,9);
	char c[width*height*3];
	for(int k=0;k<height;k++)
		for(int pk=0;pk<width;pk++)
		{
			char v[3];
			HEADER_PIXEL(header_data,v);
			if(0)printf("%d %d %d\n",v[0],v[1],v[2]);
			memcpy(&c[k*width*3+pk*3],v,3);
		}
	if(1)while(1)
	{
		char *d=c;
		char *n=c+width*height*3;
		while(d<n)
			d+=fwrite(d,1,n-d,stdout);
	}
}
