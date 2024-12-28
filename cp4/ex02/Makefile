NAME = Animal_V2

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Dog.cpp main.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
