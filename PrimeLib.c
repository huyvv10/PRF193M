//Return 1 if n is a prime number
//Return 0 otherwise.
int isPrime(int n) {
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}
//Display the list of prime number from 2 to n
void listPrimeToN(int n) {
	int i;
	if (n>=2) {
		for (i=2; i<=n; i++)
			if (isPrime(i)==1)
				printf("%d ", i);
	}
}
//Return the total value of prime numbers from 2 to n
int sumPrimeToN(int n) {
	int i, S=0;
	if (n<2) return 0;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			S+=i;
	return S;
}
//Display the first n prime numbers.
void listTheFirstNPrime(int n) {
	int i=2, count=0;
	while (count!=n) {
		if (isPrime(i)==1) {
			printf("%d ", i);
			count++;
		}
		i++;
	}
}