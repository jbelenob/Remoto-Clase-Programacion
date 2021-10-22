// calcular el factorial de n


# include <iostream>
# include <cmath>

void factorial(int n);

int main(void)

{
int a = 10; 
 int b {4};
 
factorial(a);
factorial(a/2);
factorial(b);
 factorial(1); 
  
return 0;
}

void factorial(int n)

{ int producto = 1;

for(int ii = 1; ii <= n; ii = ii+1) producto = producto*ii; 

std::cout << "\n";
std::cout << producto << "\n";
}

