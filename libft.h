/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 01:18:05 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/03 17:11:08 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_mailon
{
	void			*content;
	struct s_mailon	*next;
}					t_mailon;

typedef struct		s_coord
{
	int x;
	int y;
}					t_coord;

typedef struct		s_converge
{
	t_coord		p[4];
}					t_converge;

typedef struct		s_converge_count
{
	t_converge	*converge;
	int			nb_hash;
}					t_converge_count;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlen(const char *s);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big,
					const char *little, size_t len);
int					ft_atoi(const char *str);
int					ft_isalnum(int c);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				**ft_split(char const *str, char charset);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strcpy(char *dest, const char *src);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strncmp(const char *s1, const char *s2,
					unsigned int n);
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_mailon			*ft_lstnew(void *content);
void				ft_lstadd_front(t_mailon **alst, t_mailon *new);
int					ft_lstsize(t_mailon *lst);
t_mailon				*ft_lstlast(t_mailon *lst);
void				ft_lstadd_back(t_mailon **alst, t_mailon *new);
void				ft_lstdelone(t_mailon *lst, void (*del)(void*));
void				ft_lstclear(t_mailon **lst, void (*del)(void*));
void				ft_lstiter(t_mailon *lst, void (*f)(void *));
t_mailon				*ft_lstmap(t_mailon *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
