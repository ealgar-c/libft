#ifndef __LIBFT_H__
#define __LIBFT_H__

# include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	toupper(int c);
int	tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
int				ft_atoi(char *str);
#endif