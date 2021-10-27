#include <iostream>

// Encontrar el divisor primo más grande de un número
/* Hacer un loop que identifique los divisores del número de mayores a menores
 * Identificar si el divisor es primo
 * Si es primo, hacer break, si no lo es entonces seguir.
 * Después de todo, hacer suma de todos los divisores primos de un número.
 */ 

bool isprime(long long n)
{
  bool isprime{true};

  for(int jj = 2; jj < n; jj++)
    {
      if (n % jj == 0)
	{
	  isprime = false;
	  break;
	}
    }
  return isprime;
}

long long largestPrimeDivisor(long long n)
{
  long long largestPrimeDivisor{n};

  for(long long ii = 2; ii < n; ii++)
    {
      if ((n % ii == 0) && (isprime(n/ii)))
	{
	  largestPrimeDivisor= n/ii;
	  return largestPrimeDivisor;
	}
    }
 return largestPrimeDivisor;
}

  long long sumPrimeDivisors(long long n)
{
  long long sum{0};
  for(long long kk = 2; kk <= n; kk++)
    {
      if ((n % kk == 0) && (isprime(kk)))
	{
	  sum += kk;
	}
    }
  return sum;
}


int main()
{
  std::cout << sumPrimeDivisors(13195) << std::endl;
  std::cout << largestPrimeDivisor(600851475143);

  return 0;
}
