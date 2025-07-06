#include<cstdio>
#include"pd.h"
#include<string.h>
#include<iostream>
void dk(void(*s)(int,int,bool),int n)
{
	int pn=n%5;
	s(2,3,pn>=1);
	s(4,3,pn>=2);
	s(2,1,pn>=3);
	s(4,1,pn>=4);
	for(int k=0;k<5;k++)
		s(1+k,5,n>=5);
}
unsigned char* cs;
int s1,s2=48;
void s(int p,int d,bool s)
{
	size_t ms=(s2+d)*width*3+(s1+p)*3;
	if(s)
	{
		cs[ms]=243;
		cs[ms+1]=205;
		cs[ms+2]=93;
	}
	else
	{
		cs[ms]=0;
		cs[ms+1]=0;
		cs[ms+2]=0;
	}
}
int main()
{
	if(0)dk(s,9);
	char c[width*height*3];
	cs=(unsigned char*)c;
	for(int k=0;k<height;k++)
		for(int pk=0;pk<width;pk++)
		{
			char v[3];
			HEADER_PIXEL(header_data,v);
			if(0)printf("%d %d %d\n",v[0],v[1],v[2]);
			memcpy(&c[k*width*3+pk*3],v,3);
		}
	size_t ps=0;
	int k=0;
	double kn=0;
	bool nc=0;
	std::cin>>ps;
	while(1)
	{
		int ks=k;
		for(int n=0;n<5;n++)
		{
			s1=48-8*n;
			dk(s,ks%10);
			ks/=10;
		}
		char *d=c;
		char *n=c+width*height*3;
		while(d<n)
			d+=fwrite(d,1,n-d,stdout);
		kn+=0.1;
		if((kn-1.0)*44100.0>ps)
		{
			k++;
			if(nc)break;
			std::cin>>ps;
			if(std::cin.eof())
			{
				ps=44100.0*(5.0+kn);
				nc=1;
			}
		}
	}
}
