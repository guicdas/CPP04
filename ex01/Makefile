CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				= rm -fr
INC				= -I Animal.hpp -I Dog.hpp -I Cat.hpp -I WrongAnimal.hpp \
				-I WrongCat.hpp -I Brain.hpp
NAME			= DontSetTheWorldOnFire

SOURCES			= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp \
					WrongCat.cpp Brain.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	@$(CXX) $(CXXFLAGS) $(INC) $(SOURCES) -o $(NAME)

clean:
	@$(RM) $(SOURCES_O)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)

x:
	clear
	@$(RM) $(SOURCES_O)
	@$(RM) $(NAME)
	@$(CXX) $(CXXFLAGS) $(INC) $(SOURCES) -o $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re x