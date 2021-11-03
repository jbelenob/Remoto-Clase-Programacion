#include <iostream>
#include <cmath>

// Aquí no se incluye la multiplicidad
long long sumPrimeDivisors(long long n);

bool isprime(long long n);

//Aquí se incluye la multiplicidad
long long sumPrimeDivisorsMultiplicities(long long n);

int main()
{
  std::cout << sumPrimeDivisors(81) << std::endl;
  std::cout << sumPrimeDivisorsMultiplicities(81) << std::endl;

   std::cout << sumPrimeDivisors(600851475147) << std::endl;
  std::cout << sumPrimeDivisorsMultiplicities(600851475147);
}


long long sumPrimeDivisors(long long n) 
{
  long long sum{0};
  for(long long jj=2; jj <= n; jj++)
    {
      if(n % jj == 0 && isprime(jj))
	{
	  sum = sum + jj;
	  n = n/jj;
	}
    }
  return sum;
}


bool isprime(long long n)
{
    bool isprime{true};

  for(long long jj = 2; jj <= std::sqrt(n); jj++)
    {
      if (n % jj == 0)
	{
	  isprime = false;
	  break;
	}
    }
  return isprime;
}


long long sumPrimeDivisorsMultiplicities(long long n)
{
 long long sum{0};
  for(long long jj=2; jj <= n; jj++)
    {
      if(n % jj == 0 && isprime(jj))
	{
	  long long y{1};
	  //y contará las veces que jj divida a x (o n) 

	  long long x{n};
	  while(x % jj == 0)
	    {
	      sum = sum + jj;
	      x = x/jj;
	      y++;
	    }
	  
	  n = n/(std::pow(jj, y-1));
	}

    }
  return sum;
}
