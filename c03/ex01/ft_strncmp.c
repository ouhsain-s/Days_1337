
int ft_strncmp(char *s1 ,char *s2, unsigned int n)
  {
   unsigned int count = 0;
    
   while(count < n)
   {
 
      if(s1[count] != s2[count])
        {
           return (unsigned char )s1[count] - (unsigned char) s2[count];
        }

      count++;
    }

      return 0;
}
