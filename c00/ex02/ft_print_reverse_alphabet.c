#include <unistd.h>
 
 void ft_print_reverse_alphabet()
 {  
    short countor = 122;
    char c = countor;
  
     while(countor >= 97)
    {
       c = countor;
 
       write(1,&c,1);
 
       countor--;
    }
 
 
 }

