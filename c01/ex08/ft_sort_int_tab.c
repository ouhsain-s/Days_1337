void ft_sort_int_tab(int *tab,int size)
{
 int count=0;
 int chickissorted=0;


int swp=0;

  while(chickissorted == 0)
  {
      chickissorted=1;
    
   while (count < size-1)
   {


        if(tab[count] > tab[count+1])
        {
          chickissorted=0;
          
            swp=tab[count];
            tab[count]=tab[count+1;]
            tab[count+1] =swp;
        }  

     count++;
  
    }
     count=0;
  }
