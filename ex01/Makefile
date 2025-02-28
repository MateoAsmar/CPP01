CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MoarBrainz

SRC = main.cpp Zombie.cpp zombieHorde.cpp

HEADERS = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re