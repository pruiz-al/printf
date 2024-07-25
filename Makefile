NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c ft_print_hexa.c ft_print_putnbr.c ft_print_putvoid.c \
	   ft_print_unsigned.c \

OBJS = $(SRCS:.c=.o)

CC = clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -src

$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} $(BONUS_OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re