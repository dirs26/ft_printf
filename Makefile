NAME = libftprintf.a

SRC = ft_printf_putchar.c\
						ft_printf_putnbr.c\
						ft_printf_puthex.c\
						ft_printf_putunbr.c\
						ft_printf_putptr.c\
						ft_printf_putstr.c\
						ft_printf.c

OBJECTS = $(SOURCES:.c=.o) 

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = printf.h
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
clean:                                                                         
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

