/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebondi <ebondi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:32:43 by ebondi            #+#    #+#             */
/*   Updated: 2022/02/15 20:24:58 by ebondi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	//free (s2);
	return (i);
}

int	ft_strchr(const char *s, char c)
{
	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			break ;
		s++;
	}
	if (*s != c)
		return (0);
	return (1);
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	size_t	i;
	char	*str2;

	i = ft_strlen(str);
	str2 = (char *) malloc (sizeof(char) * i + 1);
	if (str2 == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	//free (str);
	return (str2);
}

char	*ft_strjoin(char *str, char *buffer)
{
	char	*strunion;
	size_t	len;
	int		i;
	int		j;

	if (str == NULL)
	{
		strunion = ft_strdup(buffer);
		return (strunion);
	}
	len = ft_strlen(str) + ft_strlen(buffer);
	strunion = (char *) malloc (sizeof(char) * len + 1);
	if (!strunion)
		return (NULL);
	//ft_strcpy(strunion, str);
	i = 0;
	while (str[i] != '\0')
	{
		strunion[i] = str[i];
		i++;
	}
	//ft_strcpy(strunion + i, str);
	j = 0;
	while (buffer[j] != '\0')
	{
		strunion[i + j] = buffer[j];
		j++;
	}
	strunion[i + j] = '\0';
	free (str);
	return (strunion);
}

char	*ft_split(char *str)
{
	int		i;
	int		j;
	char	*save;
	

	if (ft_strchr(str, '\n') == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	j = 0;
	while (str[i + j] != '\0')
		j++;
	if (j == 0)
		return (NULL);
	save = (char *) malloc (sizeof(char) * j + 1);
	if (!save)
		return (NULL);
	j = 0;
	while (str[i + j] != '\0')
	{
		save[j] = str[i + j];
		j++;
	}
	save[j] = '\0';
	str[i] = '\0';
	return (save);
}
