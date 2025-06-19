#include <unistd.h>





    char *convert_chartohex(int nchar)
       {
         static char rehex[4];
               rehex[0]='\\';
          
         char hexes[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

         int mod = nchar % 16;
         int int_rem = nchar/16;
         rehex[2] = hexes[mod];
 
         mod = int_rem % 16;
         rehex[1]=hexes[mod];

         rehex[3]='\0';

         return rehex;
        }




 void ft_putstr_non_printable(unsigned char *str)
     {
         int count =0;
         char *hex;

        while(str[count] != '\0')
          {
           if(str[count] > 31 && str[count] < 127)
             {
              write(1,&str[count],1);
             }
            else
            {  
              hex=convert_chartohex(str[count]) ;
              write(1,hex,3);
            }
   
             count++;
          }
      }




