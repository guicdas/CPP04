CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM				= rm -fr
INC				= -I AMateria.hpp -I Character.hpp -I MateriaSource.hpp -I Cure.cpp \
					-I Ice.cpp -I IMateriaSource.hpp
NAME			= InterfaceRecap

SOURCES			= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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