/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:09:03 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 20:18:09 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

typedef t_list node;
//mandatory
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strtrim(char	*s1, char	*set);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nbr, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
//bonus
node	*ft_lstnew(void *content);
node	*ft_lstmap(node *head, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(node *head);
node	*ft_lstlast(node *head);
void	ft_lstadd_back(node **head, node *new_node);
void	ft_lstadd_front(node **head, node *new);
void	ft_lstdelone(node *head, void (*del)(void *));
void	ft_lstclear(node **head, void (*del)(void *));
void	ft_lstiter(node *head, void (*f)(void *));

#endif
