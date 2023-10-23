/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:53:41 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/10/08 18:48:45 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	*count = 0, we are dereferencing the pointer
	to actually set the value that is pointing to 0*/

#include "libft.h"

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	ft_get_rows(char const *s, char c)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			rows++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (rows);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*wordstart;
	int		i;

	new = (char **)malloc(sizeof(char *) * (ft_get_rows(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			wordstart = (char *)s;
			while (*s != c && *s)
				s++;
			new[i] = ft_substr(wordstart, 0, s - wordstart);
			if (!**new)
				return (ft_free(new));
			i++;
		}
		else
			s++;
	}
	new[i] = NULL;
	return (new);
}
