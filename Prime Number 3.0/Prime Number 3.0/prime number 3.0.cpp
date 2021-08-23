//This program is to write prime numbers between 1 and 1000........

#include <iostream>

using namespace std;

int main()
{

	int n = 2, j = 2;

	cout << "The Prime numbers between 1 and 1000 are :" << endl;

	
	//This outer loop is to run the loop for first thousand (1000) numbers/integers......

	for ( n = 2; n <= 1000; n++)
	{
		
		bool prime = true;

		//This inner loop will check whether the number is divisible by the numbers between 2 and n-1
		//Let suppose we have number 6....
		//This inner loop will divide 6 by 2,3,4,5 one by one and check if remainder is zero or not.
		//If the remainder comes out to be zero means the number is divisible by numbers other than
		// 1 and 6. So the number is not a prime number.

		
		for ( j = 2; j <= n-1; j++)
		{
			if (n%j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime == true)
		{
			cout << n << endl;
		}
	}

	/*
	while (n <= 100)
	{
		bool prime = true;

		while (j <= n-1)
		{
			if (n%j == 0)
			{
				prime = false;
				break;
			}
			j++;
		}
		
		if (prime == true)
		{
			cout << n << endl;
		}
		n++;
	
	}
	
	*/


	return 0;
}