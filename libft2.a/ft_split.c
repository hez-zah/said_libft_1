/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:48:08 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 16:01:56 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_count_words(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			j++;
// 		i++;
// 	}
// 	return (j);
// }

// static	size_t	ft_cha_in_word(char const *s, char c )
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 			j++;
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			return (j);
// 		i++;
// 	}
// 	return (j);
// }

// static	int	ft_aloc(char const *s, char c, char *str, char **ptr)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (j == 0 && s[i] != c)
// 		{
// 			str = malloc(sizeof (char) * (ft_cha_in_word(&s[i], c) + 1));
// 			if (!str)
// 				return (0);
// 		}
// 		if (s[i] != c)
// 			str[j++] = s[i];
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 		{
// 			str[j] = '\0';
// 			*ptr++ = str;
// 			j = 0;
// 		}
// 		i++;
// 	}
// 	*ptr = 0;
// 	return (1);
// }

// static	void	ft_free(char *str, char **ptr)
// {
// 	size_t	i;

// 	i = 0;
// 	while (ptr[i])
// 		free(ptr[i++]);
// 	free(ptr);
// 	ptr = 0;
// 	free(str);
// 	str = 0;
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**ptr;
// 	char	*str;

// 	if (!s)
// 		return (0);
// 	ptr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
// 	if (!ptr)
// 		return (0);
// 	str = 0;
// 	if (!ft_aloc(s, c, str, ptr))
// 	{
// 		ft_free(str, ptr);
// 		return (0);
// 	}
// 	return (ptr);
// }

// int count_word(char *str, char c)//"   hamza ezzahi said  "
// {
// 	int len;
// 	int	i;

// 	len = 1;
// 	i = 0;
// 	while (*str)
// 	{
// 		if (*str != c && len == 1)
// 		{
// 			i++;
// 			len = 0;
// 		}
// 		else if (*str == c && len == 0)
// 			len = 1;
// 		str++;
// 	}
// 	return (i);
// }



// int main()
// {
// 	printf("%d\n", count_word("  hamza ez   za$hi sai  d  ", '$'));
// }

// char	**ft_split(char const *s, char c)
// {

// }


int	size_(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (*str != c && j == 1)
		{
			j = 0;
			i++;
		}
		else if (*str == c && j == 0)
			j = 1;
		str++;
	}
	return (i);
}

char	*ft_m3yzo(const char *str, size_t n, size_t len)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc((len - n + 1), (sizeof(char)));
	while (n < len)
	{
		s[i] = str[n];
		i++;
		n++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t		m;
	size_t		j;
	int			n;
	char		**src;

	m = -1;
	j = 0;
	n = -1;
	if (!s)
		return (0);
	src = ft_calloc((size_(s, c) + 1), sizeof(char *));
	if (!src)
		return (NULL);
	while (++m <= ft_strlen(s))
	{
		if (s[m] != c && n < 0)
			n = m;
		else if ((s[m] == c || m == ft_strlen(s)) && n >= 0)
		{
			src[j++] = ft_m3yzo(s, n, m);
			n = -1;
		}
	}
	src[j] = 0;
	return (src);
}