

void ft_ultimate_div_mod(int *a,int *b)
{
  if(*b==0)
 {
  return;
 }
  short tmp =*a;
 
  *a=*a / *b;
  *b=tmp % *b;
}
