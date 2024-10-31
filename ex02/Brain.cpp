#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain created!\n";
	this->setIdeas("");
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed!\n";
}

Brain::Brain( const Brain &n ) {
	std::cout << "Brain Copy called!\n";
	for(int i = 0; i < 100 ; i++)
		ideas[i] = n.ideas[i];
}

Brain& Brain::operator=( const Brain &n ) {
	std::cout << "Brain Copy assigment called!\n";

	if ( this != &n )
		return *this;
	for(int i = 0; i < 100 ;i++)
		this->ideas[i] = n.ideas[i];
	return *this;
}

std::string const	*Brain::getIdeas( void ) const{
    return ideas;
}

void    Brain::setIdeas(std::string idea){
    if (idea.empty())
        idea = "zzzzzzz...zzzzzzz";
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
}