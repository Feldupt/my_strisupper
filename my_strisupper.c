int	is_upperchar(char c)
{
  if(c >= 65 && c <= 90)
    return (0);
  else
    return (-1);
}

int	my_strisupper(char *str)
{
  int i;

  i = 0;
  while(str[i])
    {
      if(is_upperchar(str[i]) == 0)
	i++;
      else
	return (-1);
    }
}

int	main()
{
  char *str = "HElLO";
  printf("%d", my_strisupper(str));
  
  return(0);
}
