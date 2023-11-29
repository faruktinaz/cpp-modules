NAME = phoneBook

SRCS =	main.cpp \
		utils.cpp \
		set_utils.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = g++
CFLAGS = -std=c++98 -g
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