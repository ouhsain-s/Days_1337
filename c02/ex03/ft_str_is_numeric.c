

int ft_str_is_numeric(char *str)
{
  int count =0;
  int cast=0;

  while(str[count] != '\0')
 {
  cast=str[count];
  
   if(cast < 42 || cast > 51)
     {
      return 0;
     }

  count++;
}
 
return 1;

} 
