#include <unistd.h>

short are_numbers_different(int n1 ,int n2 , int n3)
{

  if(n1 < n2)
   {
    if(n2 < n3)
      {
        
         
           return 1;
 
      }
      else
      {
          return 0;
      }  
   }
   else
     {
         return 0;
 
      }  
  
}

void ft_print_comb(void)
{
  char comb =' ';

  int first_n=0;
  int second_n=0;
  int therd_n=0;

  while(first_n<10)
  { 
    while(second_n<10)
     {
       while(therd_n<10)
        {

          if(are_numbers_different(first_n , second_n , therd_n ) == 1)
            {
              comb=first_n +'0';
              write(1,&comb,1);
             
              comb=second_n +'0';
              write(1,&comb,1);

              comb=therd_n +'0';
              write(1,&comb ,1);

               write(1,",  " ,3);
            }
            
             therd_n++;  
          
        }

        second_n++;
         therd_n=0;
     }

    
      first_n++;

      second_n=0;
      therd_n=0;
  }

}


