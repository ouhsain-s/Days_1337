#include <unistd.h>


void ft_is_negative(int n)
{ 

  char Case =' ';

   if( n < 0 )
   {
    Case='N';
   }
   else
   {
    Case='P';
   }

  write(1,&Case,1);
}


