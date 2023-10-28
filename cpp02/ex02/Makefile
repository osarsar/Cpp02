SRCS =  main.cpp \
		Fixed.cpp \
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) Fixed.hpp
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all