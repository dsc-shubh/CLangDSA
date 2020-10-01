#include<stdio.h>
int main(int argc, char const *argv[])
{
	float a,b,c,r1,r2,y,z,w;
	scanf("%f%f%f",&a,&b,&c);
	y = b*b - 4 * a * c;
	if (y==0)
	{
			printf("Equal roots. \n");      //when equal
	}
	else
		if (y<0)
		{
			printf("Complex roots. \n");   //for complex roots
		}
		else
		{
			printf("Distinct roots \n");    //for distinct roots
		}

	return 0;
}
