int	len_nu(int nu)
{
	int i;
	int power;

	power = 1;
	i = 1;
	while (nb > 0)
	{
		nb %= power * 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int len;
	len = len_nu(n);
	
}
