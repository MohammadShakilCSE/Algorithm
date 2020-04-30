// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)//p=2,p*p=4;
	{

		if (prime[p] == true)//prime[2]=t
		{
			for (int i=p*p; i<=n; i += p){//i=4

                prime[i] = false;
			}

		}
	}
	// Print all prime numbers
	for (int p=2; p<=n; p++)
	if (prime[p])
		cout << p << " ";
}

// Driver Program to test above function
int main()
{
	int n ;
	cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}
