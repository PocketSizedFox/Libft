NAME = libft.a

SRC = ft_atoi.c ft_putchar.c ft_memset.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strncat.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	  ft_strlen.c ft_strdup.c ft_memmove.c \


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
