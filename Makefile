NAME = libftprintf.a

SRC_DIR = src
INC_DIR = includes

SRCS = \
ft_printf.c \
ft_putchar.c \
ft_puthex.c \
ft_putll_nbr.c \
ft_putptr.c \
ft_putstr.c \
ft_strchr.c \
ft_toupper.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re