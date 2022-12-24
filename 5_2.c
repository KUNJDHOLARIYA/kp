// This code is prepared by kunj dholariya 22CE027
// 
#include<stdio.h>
#include<conio.h> 
#include<math.h> 

int main()

{
float a,b,c,r1,r2,D,imaginary; 
printf("Enter the Value a: "); 
scanf("%f",&a); 
printf("Enter the Value b: "); 
scanf("%f",&b); 
printf("Enter the Value c: "); 
scanf("%f",&c);

D=(b*b)-(4*a*c); 

switch(D>0)
{
	case 1: r1=(-b+sqrt(D))/(2*a);
	        r2=(-b+sqrt(D))/(2*a);
			printf("root of equation %2f & %2f",r1,r2); 
	break;
	
	case 0: 
	
			switch(D<0)
			{
				case 1:
				r1=-b/(2*a);
				r2=-b/(2*a);
				imaginary=sqrt(-D)/(2*a);
				printf("Root1=%2f & Root2=%2f & Imaginary=%2f",r1,r2,imaginary);
				break; 	
	
				case 0:
				r1=-b/(2*a);
				r2=-b/(2*a); 
				printf("root1=root2=%2f",r1);
				break;
			}
	break;
}

return 0;
}
