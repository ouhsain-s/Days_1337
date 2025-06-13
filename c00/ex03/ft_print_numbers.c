#include <unistd.h>


void ft_print_numbers(void){

 short digits=0;
char c=' ';

 while(digits<10)
 {
   c=digits+'0';
    write(1,&c,1);
    digits++;
  
 }

}


