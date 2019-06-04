NAME = libft.a

SRC = ft_atoi.c ft_putchar.c ft_memset.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strncat.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	  ft_strlen.c ft_strmapi.c ft_strdup.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncpy.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_countwords.c ft_get_str_len.c \

all :
		gcc -c $(SRC) -Wextra -Werror -Wall -I .
		ar -rc $(NAME) *.o
		ranlib libft.a

clean:
		rm *.o

fclean: clean
		rm libft.a

re: fclean all

mhlem: all
		gcc main.c libft.a
		./a.out
		rm *.o

test:
		norminette $(SRC)
		gcc $(SRC) main.c -Wall -Wextra -Werror -o test
		rm test
