NAME = phoneBook

SRCS =	main.cpp \
		utils.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.cpp.%o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM)  $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re