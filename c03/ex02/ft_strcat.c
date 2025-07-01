

char *ft_strcat(char *dest,char *src)
     {
       int count =0; 
       
       while (dest[count] != '\0')
        {
          count++;
        }
        
       int count2=0;
 
        while(src[count2] != '\0')
         {
           dest[count]=src[count2];

            count2++;
            count++;   
         }
          dest[count]='\0';
         
           return dest;
       }
