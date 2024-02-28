NAME = push_swap.a

SRCS = ft_lists.c ft_push.c ft_reverse_rotate.c ft_rotate.c \
		ft_swap.c main.c ft_split.c ft_stack_initialize.c
	
OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re