int ft_str_is_alpha(char *str)
{ 
  int count =0;
   int chick=0 ;

  while(str[count] != '\0' )
  {
    chick=str[count];
     
     if( (chick < 65 || chick > 90) && (chick < 97 || chick > 122 )  )
      {
       return 0;
      }
   
    count ++;
  }
   
  return 1;
 }
       
