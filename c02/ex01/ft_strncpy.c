char *ft_strncpy(char *dest, char *src , unsigned int n)
{
  int count =0;

  while(count < n && src[count]!='\0' )
 {
   dest[count] = src[count];
    count++;
 }

  while(count < n )
  {
    dest[count]='\0';

    count++;
  }
  
  return dest;
}

 
