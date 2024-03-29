
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = libftprintf.h
FILES = ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_hex.c ft_optimize.c\
		ft_ptnbr_u.c ft_put_p.c

OBG = $(FILES:.c=.o)

%.o:%.c $(DEPS)
	$(CC) $(CFLAGS) -c $<

all:$(NAME)

$(NAME):$(OBG)
	ar rc $(NAME) $(OBG)

clean:
	rm -f $(OBG) $(OBGB)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re