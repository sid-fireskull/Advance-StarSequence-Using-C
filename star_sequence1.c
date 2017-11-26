#include<stdio.h>
#include<stdlib.h>

// Author: Siddhartha Sadhukhan
// Compiler: gcc version 5.4.0 20160609
// Platform : Ubuntu 16.04 x86

int main()
{
int n,i,j,count,k;
scanf("%d",&n);

if(n%2==0)
{

	for(i=1;i<=n/2;i++)
	{
		count=0;		
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				if(i%2!=0)
				{
					printf("*");
				}
				else
				{
					count++;
				}				
			}
			else
			{
				printf("#");		
			}
	
		}
			for(k=0;k<count;k++)
                        {
                                printf("*");
                        }

		printf("\n");
	}
	for(i=n/2;i>=1;i--)
	{
		count=0;
		for(j=1;j<=n;j++)
                {
                        if(i>=j)
                        {
				if(i==n/2 && (n/2)%2!=0)
				{
                                	count++;
				}
				else if(i%2!=0)
				{
					count++;
				}
				else
				{
					printf("*");
				}
                        }
                        else
                        {
                                printf("#");
                        }				
                }
		for(k=0;k<count;k++)
                {
                      printf("*");
                }

                printf("\n");
	}

}
else
{
	for(i=1;i<=n/2+1.5;i++)
        {
                count=0;
                for(j=1;j<=n;j++)
                {
                        if(i>=j)
                        {
                                if(i%2!=0)
                                {
                                        printf("*");
                                }
                                else
                                {
                                        count++;
                                }
                        }
                        else
                        {
                                printf("#");
                        }

                }
                        for(k=0;k<count;k++)
                        {
                                printf("*");
                        }
                printf("\n");
        }

	for(i=n/2+0.5;i>=1;i--)
        {
                count=0;
                for(j=1;j<=n;j++)
                {
                        if(i>=j)
                        {
                                if(i%2!=0)
                                {
                                        printf("*");
                                }
                                else
                                {
                                        count++;
                                }
                        }
                        else
                        {
                                printf("#");
                        }
                }
                        for(k=0;k<count;k++)
                        {
                                printf("*");
                        }
                printf("\n");
        }
}
}
