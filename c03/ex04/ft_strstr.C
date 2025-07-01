





char *ft_strstr(char *str , char *to_find)
   {
      int count =0;
      int count2=0;
      int copycount=0;

    

     while (str[count] != '\0')
     {

        if(str[count] == to_find[0] ) 
         {   
           count2=0;
           copycount=count;
           
   
          while(to_find[count2] != '\0' && str[copycount] != '\0')
             {
                if(to_find[count2] != str[copycount])
                 {
                  
                     break;
                 } 
                 
                 count2++;
                 copycount++;
             } 

             if(to_find[count2] == '\0' )
               {
                  return &str[count]; 
               }          
 
         }
    
         count++;
       }
      
return &str[0];

  }
