// calcular el factorial de n

# include <iostream>
# include <cmath>

void factorial(int nmin, int nmax);

int main(void)
{
  int m = 1;
  int n = 10; 
  
  factorial(m, n);
  factorial(m, n/2);
  
  return 0;
}

void factorial(int nmin, int nmax)
{ int producto = 1;
  for(int ii = nmin; ii <= nmax; ii = ii+1) producto = producto*ii; 
  
  std::cout << "\n";
  std::cout << producto << "\n";
}
