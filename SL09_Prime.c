#include <stdio.h>
#include "PrimeLib.c"

int isPrime(int);
void listPrimeToN(int n);
int sumPrimeToN(int n);
void listTheFirstNPrime(int n);

int main() {
	int n;
	scanf("%d", &n);
	if (isPrime(n)==1)	//call function
		printf("%d is a prime number.", n);
	else
		printf("%d is not a prime number.", n);
	printf("\nList prime to %d: ", n);
	listPrimeToN(n);	//Call module void
	printf("\nTotal value of primes from 2 to %d: %d", n, sumPrimeToN(n));
	printf("\nThe first %d prime numbers: ",n);
	listTheFirstNPrime(n);
	return 0;
}

