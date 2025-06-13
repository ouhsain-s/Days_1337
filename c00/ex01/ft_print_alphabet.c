#include <unistd.h>

void ft_print_alphabet()
{
 short countor = 97;
 char c = countor;

  while(countor <= 122)
 {
  c = countor;

  write(1,&c,1);
  countor++;
 }

}
