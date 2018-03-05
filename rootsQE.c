#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	float a,b,c,r1,r2;
	scanf("%f%f%f",&a,&b,&c);
	r1=(-b + sqrt(b*b - 4*a*c))/(2*a);
	r2=(-b - sqrt(b*b - 4*a*c))/(2*a);
	printf("The roots are %f and %f \n",r1,r2 );
	return 0;
}