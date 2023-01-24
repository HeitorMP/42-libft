/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:21:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 11:17:47 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/**********************
	LIBS
**********************/

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* BUFFER GET_NEXT_LINE */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/**********************
    STRUCTS
**********************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**********************
 FUNCTIONS PROTOTYPES
**********************/

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t len);
void			*ft_calloc(size_t n, size_t s);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(const void *bigptr, int ch, size_t length);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int ch);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
int				ft_tolower(int c);
int				ft_toupper(int c);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
		void (*del)(void *));

/* FT_PRINT_f */
int				ft_printf(const char *str, ...);
int				ft_get_hexlen(unsigned int num);
int				ft_ptr_len(unsigned long long num);
int				call_char(va_list args);
int				call_string(va_list args);
int				call_int(va_list args);
int				call_hex(va_list args, char next);
int				put_pointer(unsigned long long np);
int				call_ptr(va_list args);
int				call_unsigned(va_list args);
void			ft_putunsigned(unsigned int n);
void			put_hex(long int np, char x);

/* GET_NEXT_LINE */

char			*get_next_line(int fd);
char			*ft_strchr_gnl(char *s, int c);
char			*ft_strjoin_gnl(char *s1, char *s2);

/* EXTRAS */

int				ft_get_digits(long long int nb);
int				ft_cmp(int a, int b);
int				ft_str_is_numeric(char *str);
long long		ft_atoll(const char *str);
int				ft_count_words(char const *s, char c);

#endif
