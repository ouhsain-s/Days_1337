char  *ft_strcpy.(char *dest,char *src)
{
  int count =0;

  do{

     count++;

     dest[count-1]=src[count-1];

  }while(src[count] != '\0');
  
 return dest;

}
