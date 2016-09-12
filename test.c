#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUF_SIZE 2
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}
int	ft_read(int fd)
{
	int fd;
	int ret;
	char buf[BUF_SIZE +1];

	fd = 0;
	ret = 0;
	fd = open("test.txt", O_RDONLY);
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
	}
	return (0);
}

int	main (int argc, char **argv)
{
	int  fd;

	fd = open ("test.txt", O_RDONLY);
	if (fd >= 0)
		ft_read(test.txt);
	close(fd);
	return (0);
}
