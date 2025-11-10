/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:46:28 by smolinas          #+#    #+#             */
/*   Updated: 2025/10/21 13:11:09 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr_newline(char *str)
{
	size_t	len;
	char	*newline;

	len = 0;
	if (!str)
		return (NULL);
	while (str[len] != '\0' && str[len] != '\n')
		len++;
	if (str[len] == '\n')
		len++;
	newline = ft_substr(str, 0, len);
	if (!newline)
		return (NULL);
	return (newline);
}

static char	*ft_remainder(char *full_line)
{
	int		len;
	int		start;
	char	*remainder;

	start = 0;
	remainder = NULL;
	if (!full_line)
		return (NULL);
	len = ft_strlen(full_line);
	while (full_line[start] != '\n' && full_line[start] != '\0')
		start++;
	if (full_line[start] == '\n')
		start++;
	if (start >= len)
		return (NULL);
	remainder = ft_substr(full_line, start, len - (start));
	if (!remainder)
		return (NULL);
	return (remainder);
}

static char	*ft_read_update(int fd, char *tail, char *buffer)
{
	ssize_t	bytes;
	char	*tmp;

	bytes = 1;
	while (bytes > 0)
	{
		if (tail && ft_strchr(tail, '\n'))
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		if (bytes == -1)
		{	
			free(tail);
			return (NULL);
		}
		buffer[bytes] = '\0';
		if (!tail)
			tail = ft_strdup("");
		tmp = tail;
		tail = ft_strjoin(tmp, buffer);
		free(tmp);
	}
	return (tail);
}

char	*get_next_line(int fd)
{
	static char	*tail[FD_MAX];
	char		*line;
	char		*buffer;
	char		*tmp;

	line = NULL;
	tmp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD_MAX)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	tail[fd] = ft_read_update(fd, tail[fd], buffer);
	free(buffer);
	if (!tail[fd])
		return (NULL);
	tmp = tail[fd];
	line = ft_substr_newline(tail[fd]);
	tail[fd] = ft_remainder(tail[fd]);
	free(tmp);
	return (line);
}
