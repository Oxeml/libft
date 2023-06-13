/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:07:28 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 02:22:48 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <fcntl.h>
//#include <string.h> 

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main ()
{
	int	fd;
	

	fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	const char*	example;
	example = "hello";
	//ssize_t a = write(fd, example, strlen(example));
	while(*example)
	{
		ft_putchar_fd(*example, fd);
		*example++;
	}
	close(fd);
	return(0);
}
*/
