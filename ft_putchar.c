#include <unistd.h>
void	ft_putchar_fd(char c, char *fd)
{
	write(fd, &c, 1);
}
