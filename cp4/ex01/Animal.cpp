/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:21:56 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:22:06 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal &Animal::operator=(const Animal &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

Animal::Animal( void ) : type("Default"){
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

Animal::Animal( st_ set ) : type(set) {
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

Animal::Animal( const Animal &obj ) {
	std::cout << RED "Copy Constructor Called" RESET << std::endl;
	*this = obj;
}

Animal::~Animal() {
	std::cout << RED "Destructor Called" RESET << std::endl;
}

st_		Animal::getType( void ) const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << BLUE "Aaaaaaaghhhhhhh" RESET << std::endl;
}
