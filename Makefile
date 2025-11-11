CCFLAGS = cc -Wall -Wextra -Werror
SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c

OBJ = $(SRC:.c=.o)
NAME = libft.a
HEADER = libft.h

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CCFLAGS) -I$(HEADER) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all
	clean
	fclean
	re
