


int   counvern_string_tonumber(char	*digits,int	 sign)
      {
        int	count=0;
        while(digits[count] != '\0')
        { 
          count++;
        }

          count--;
         int	pow=1;
         int	number=0;

        while(count >= 0)
         { 
           number+=(digits[count]-48) * pow;
           pow= pow * 10;
           count--;
         }

        if(sign != 1)
          {
           number=number * -1;
          }
             return number;
       }


int	select_sign(char	*str)
{
    int   count=0;
    int   count_signs=0;
 
   while(str[count] != '\0')
    {
       if( str[count] == '-')
       {
             count_signs++;
       }
       else if ( str[count] != '+' &&  str[count] != ' ')
       {
         break;
       }
      count++;
    }
 
   return (count_signs % 2 == 0);
}




char	*return_digits(char    *str)
{
  int   count=0;
 static char	digits[6];
  int	count_arr=0; 

 while(str[count] != '\0' && count_arr < 5 )
  {
     if( str[count] >= '0' && str[count] <= '9')
     {
           digits[count_arr] = str[count];
           count_arr++;
     }
     else if (str[count] != '-' && str[count] != '+' &&  str[count] != ' ')
     {
       break;
     }  
    count++;
  }
    digits[count_arr]='\0';

     
   return digits;
 }



int	ft_atoi(char *str)
{
 char	*digits =return_digits(str);
 int	_sign=select_sign(str);
  
 return	counvern_string_tonumber(digits, _sign); 

}












