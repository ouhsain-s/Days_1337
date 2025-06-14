#include <stdio.h>
#include <unistd.h>


short is_number1_smaller_or_equal(short n1 , short  n2)
{
  if(n1 < n2  )
   {
      return 1;
   }
   else
   {
     return 0;
   }

}
 
void print_numbers_asXX_XXformat(short n1, short n2)
{
  char digits[5];
   
        digits[0]=(n1 / 10) +'0';
        digits[1]=(n1 % 10) +'0';
        digits[2]=' ';
        digits[3]=(n2 / 10) +'0';
        digits[4]=(n2 % 10) +'0';

       write(1,digits,5);

       if(n1 != 98 || n2 != 99 )
        {
          write(1,", ",2); 
        }
}

void ft_print_comb2(void)
{
   
  for(short i =0; i<=99; i++)
  {
    for(short j=0; j<=99; j++)
    {
      if( is_number1_smaller_or_equal(i,j) == 1 )
       {
          print_numbers_asXX_XXformat(i,j);
        
       }
    }
  } 
}


int main()
{
    ft_print_comb2();
    return 0;
}
