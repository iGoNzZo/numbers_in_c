#include <stdio.h>
#include <math.h>


double roundToInteger(double num);
double roundToTenths(double num);
double roundToHundreths(double num);
double roundToThousandths(double num); 

void main()	{
	double x;
	
	printf("Enter a value for x: ");
	scanf("%lf", &x);
	
	while(x != EOF)	{ // loop till end of file 
		printf("%f\n", x);
		printf("%f\n", roundToInteger(x));
		printf("%f\n", roundToTenths(x));
		printf("%f\n", roundToHundreths(x));
		printf("%f\n", roundToThousandths(x));
		
		printf("\nEnter a value for x: ");
		scanf("%lf", &x);
	} // end while loop
}

//function to round to integer
double roundToInteger(double num)	{
	return floor(num * 1 + .5);
}// end of round int function

//function to round to tenths
double roundToTenths(double num)	{
	return floor(num * 10 + .5)/10;
}// end function to round thenths

//function to round to hundreths
double roundToHundreths(double num)	{
	return floor(num * 100 + .5)/100;
}// end function to round to hundreths

//function to round to thousandths 
double roundToThousandths(double num)	{
	return floor(num * 1000 + .5)/1000;
}// end of round to throusandths function 
