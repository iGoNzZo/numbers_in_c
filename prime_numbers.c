#include <stdio.h>
#include <math.h>
#include <time.h>


//function declarations
int isPrime(int p);
int isFasterPrime(int p);
void printResults(double tA, double tB, double tC, double tD);


//main function
void main()	{
	double  timeA, timeB, timeC, timeD;
	//variables to hold a time as a double
	int i;
	
	printf("\nisPrime\n");
	timeA = time(NULL); // set time == null
	for(i = 0; i < 10000; i++)	{
		if(isPrime(i))	{ //if i is prime print i
			printf("%d  ", i);
		}
	}
	timeB = time(NULL); // set time == 0
	
	printf("\n\nisFasterPrime\n");
	timeC = time(NULL);
	for(i = 0; i < 10000; i++)	{
		if(isFasterPrime(i))	{ //if i is prime print i 
			printf("%d  ", i);
		}
	}
	timeD = time(NULL);
	
	printResults(timeA, timeB, timeC, timeD);
}// end main

//function to tell if p1 is prime
int isPrime(int p1)	{
	int divideBy;
	
	for(divideBy = 2; divideBy <= p1/2; divideBy++)	{
		if(p1 % divideBy == 0)	{
			return 0;
		}
	}
	return 1;
}// end of prime function

//function to determin if a number is prime
int isFasterPrime(int p2)	{
	int divideBy;
	
	for(divideBy = 2; divideBy <= (int) floor(sqrt(p2)); divideBy++)	{
		if(p2 % divideBy == 0)	{
			return 0;
		}
	}
	return 1;
}// end of prime function 

//function to print the time comparison 
void printResults(double tA, double tB, double tC, double tD)	{
	printf("\nTime comparison\n");
	printf("isPrime: %f\n", tB - tA);
	printf("isFasterPrime: %f\n\n", tD - tC);
}// end of print function
