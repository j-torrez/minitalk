/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:31:14 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/10/08 16:57:58 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strleng(const char *s);
char	*ft_strdup_line(const char *s1);
char	*ft_strchr_line(const char *s, int c);
char	*ft_substr_line(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_line(char const *s1, char const *s2);
char	*get_next_line(int fd);
size_t	gnl_strlen(const char *s);
void	*gnl_calloc(size_t count, size_t size);

#endif