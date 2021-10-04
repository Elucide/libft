void *memmove(void *dest, const void *src, size_t n)
{
	int	i;
	i = 0;
	while (i < n)
	{
		dest = src;
		dest++;
		src++;
	}

