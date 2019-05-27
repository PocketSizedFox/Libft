#ifndef _LIBFT_H_
#define _LIBFT_H_
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
  int	ft_strcmp(const char *s1, const char *s2);
  char	*ft_strcpy(char *dst, const char *src);
  int ft_atoi(const char *str);
  int ft_isupper(char *str);
  void ft_putchar(char c);
  int ft_isalpha(char c);
  int ft_islower(char c);
  int ft_isdigit(int c);
  int ft_isprint(char c);
  int ft_toupper(int c);
  int ft_strlen(const char *str);
  void ft_putnbr(int nb);
  void *ft_memalloc(size_t size);
  void *ft_memset(void *b, int c, size_t len);
  char *ft_strdup(char *src);
  char *ft_strcat(char *s1, const char *s2);
  char *ft_strncat(char *s1, const char *s2, size_t n);
  void ft_bzero(void *s, size_t n);
  void	*ft_memcpy(void *restrict str1, const void *restrict str2, size_t n);
  void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
  void	*ft_memmove(void *dst, const void *src, size_t len);
  void	*ft_memchr(const void *s, int c, size_t n);
  int	ft_memcmp(const void *s1, const void *s2, size_t n);
  char	*ft_strncat(char *s1, const char *s2, size_t n);
  size_t	ft_strlcat(char *dst, const char *src, size_t size);
  char	*ft_strchr(const char *s, int c);
#endif /* _LIBFT_H_ */

