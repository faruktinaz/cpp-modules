NAME = phoneBook

SRCS =	main.cpp \
		utils.cpp \
		set_utils.cpp \

OBJS = $(SRCS:.cpp=.o)


CXX_STANDARD = c++98
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=$(CXX_STANDARD)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

%.cpp.%o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM)  $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re