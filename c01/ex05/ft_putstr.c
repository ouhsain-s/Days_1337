
void if_putstr(char *str)
{

   short count=0;

  while(str[count]!='\0')
   {

      write(1,&str[count],1);

      count++;
   }

}
