int ft_isalnum(char c)
{
	return((c >= '0' && c <= '9') || (c >= 'a' && c <= 'b')
		|| (c >= 'A' && c <= 'Z'));
}
