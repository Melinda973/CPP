#include <iostream>

int main()
{
    long long n;
    
    while (std::cin >> n)
    {
	long long i;
	bool prime = true;

	if (n <= 1)
	    prime =  false;
 
	for (i = 2; i < n; i++)
	    if (n % i == 0)
		prime = false;

	prime ? std::cout << n << " is a prime: True\n" : std::cout <<
	n << " is a prime: False\n";
    }

    return 0;
}
