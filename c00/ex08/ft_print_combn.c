#include <unistd.h>




    short isarr_hasnotbeen_duplecate(short arr[] ,short length)
       {
         for(short i=length ; i-1>0 ; i--)
         {
             if( arr[i-1] >= arr[i-2] )
               {
                 return 0;
               }
         }
           
          return 1;
       }
 

    


   void print_digits(short arr[] , short length)
   {
    if( isarr_hasnotbeen_duplecate(arr , length) == 1)
      {
        char number[length] ;
          
           for(short i=length ; i>0 ; i--)
           {
             number[length - i] = arr[i-1]+'0';
                      
           }
         
           write(1,number,length);

          write(1,", ",2);
            
               
              
           
      }
   }




  
  void rec_print_diff_numbers(short turn ,short arr[],short lengthofarr)
  {
     short counter=0;
     
    while(counter < 10)
    {
      arr[turn-1]=counter;

      if(turn != 1)
        {
          rec_print_diff_numbers(turn-1,arr , lengthofarr);
          
        }
       else
        {
          print_digits(arr , lengthofarr);
        }
       
       counter++;
    }
   
  }

  void ft_print_combn(short n)
 {
   short digits[n];
   rec_print_diff_numbers(n , digits , n);
 } 
