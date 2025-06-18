unsigned int ft_strlcpy(char *dest ,char *src, unsigned int size)
 {
  unsigned int i=0;
   
     while(src[i] != '\0')
      { 
         i++;
      }
 
 if(size > 0)
 {
    
  unsigned int j=0;
  
   while(j < size-1 && src[j] != '\0')
        {
         dest[j]=src[j];
         j++;
        }    
 
      dest[j]='\0';
 }
  return i;

}
