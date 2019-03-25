#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>


class Prime {
public:
	bool isPrime(long int a, long int i) {

		if (a < 2) {
			return false;
		}
		for (i = 2; i <= sqrt(a); i++)
		{
			if (a%i == 0) {
				return false;
			}	
		}
		return true;
	}
};
int main()
{
	srand(time(NULL));

	long int c;
	Prime PrimeCheck;
	std::cout << "Podaj ilosc liczb do sprawdzenia (od 1 do 100000): " << std::endl;
	std::cin >> c;

	for (long int b = 1; b <= c; b++) {

		long int n = std::rand() % 100000 +1;
		if (PrimeCheck.isPrime(n, 2))
		{
			std::cout << "TAK\n";
		}
		else
		{
			std::cout << "NIE\n;
		}
	}
}


