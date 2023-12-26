NAME = bsp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CXX= c++

SRCS  = main.cpp bsp.cpp Fixed.cpp Point.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all
