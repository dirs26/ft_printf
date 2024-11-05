NAME = libftprintf.a

SRC = ft_printf_putchar\
						ft_printf_putnbr\
						ft_printf_puthex\
						ft_printf_putunbr\
						ft_printf_putptr\
						ft_printf

OBJECTS = $(SOURCES:.c=.o) 

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = libftprintf.h
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
clean:                                                                         
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

