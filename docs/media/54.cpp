#include<stdio.h>
typedef struct
{
	char ID[20];
	int score;
	int English;
}IN;
main()
{
	int m,n,i,j,k,l;
	scanf("%d%d",&m,&n);
	IN a[200],t;
	for(i=0;i<m;i++)
	{
		scanf("%s%d%d",a[i].ID,&a[i].score,&a[i].English);
	}
	for(j=0;j<m-1;j++)
	{
		k=j;
		for(l=j+1;l<m;l++)
		{
			if(a[k].score==a[l].score)
			{
				if(a[k].English<a[l].English)
				{
					k=l;
				}
			}
			if(a[k].score<a[l].score)
			{
				k=l;
			}
		}
		if(k!=l)
		{
			t=a[j];
			a[j]=a[k];
			a[k]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d %d\n",a[i].ID,a[i].score,a[i].English);
	}
}
