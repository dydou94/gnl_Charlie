/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 13:04:59 by dyuzan            #+#    #+#             */
/*   Updated: 2016/08/15 06:00:43 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line) //GNL doit me permettre de lire un fd une ligne a la fois jusque a la fin dutxt
{
	int ret;
	int j;
	char buf[BUF_SIZE + 1];
	char *tmp;
	char *cyr;
	char static *futur;

	j 	= 0;
	ret = 0;
	cyr = ft_strdup("");
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(cyr, buf);
		free(cyr);
		cyr = tmp;
		

	}
	//*line = cyr;
	return (0);
}


int
int		ft_get_the_back_slash(char *str)
{
	char	*tmp;
	int		i;
	int		get_position;

	get_position = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
			tmp[i] = str[i];
			if (str[i] == '\n')
			{
				get_position = i;
			}
			if (str[i] != '\0' && str[i] == '\n')
			{
				while (str[i] != '\0')
				{
					i++;
				}
				return (get_position - i);
			}
			i++;
			return (get_position);
	}
	return (0);
}

int	main (int argc, char **argv)
{
	char *x;
	int  fd;

	fd = open("test.txt", O_RDONLY);
	if (fd >= 0)
		get_next_line(fd, &x);
	else
		ft_putendl("OPEN FAILED");
	close(fd);
	return (0);
}