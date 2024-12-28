NAME = Go_Crazy

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp main.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)

HEADER = AMateria.cpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
