#include <stdio.h>
#include <unistd.h>


void ft_putnbr(int nb)
{
 char digits[2];
       digits[0]=(nb / 10) +'0';
       digits[1]=(nb % 10) +'0';

   write(1,digits,2);
 }


int main()
{
  ft_putnbr(42);
  return 0;

}
