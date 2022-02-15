/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebondi <ebondi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:30:18 by ebondi            #+#    #+#             */
/*   Updated: 2022/02/15 20:03:29 by ebondi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<fcntl.h>

char	*get_next_line(int fd);
int		ft_strchr(const char *s, char c);
int		ft_strcpy(char *s1, char *s2);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *str, char *buffer);
char	*ft_split(char *str);

#endif