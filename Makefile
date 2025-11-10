CCFLAGS = cc -Wall -Wextra -Werror
SRC = isalpha.c

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
