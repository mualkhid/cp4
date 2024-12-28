/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:21:15 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/23 16:35:10 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("pispisnaw") {
	std::cout << GREEN "WrongAnimal Default Constructor Called" RESET << std::endl;
}

WrongAnimal::WrongAnimal( st_ type ) {
	std::cout << GREEN "Constructor Called" RESET << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	std::cout << GREEN "Default Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

void	WrongAnimal::makeSound() const {
	std::cout << BLUE "Aaaaaaaghhhhhhh Wrong animal" RESET << std::endl;
}

st_		WrongAnimal::getType( void ) const {
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default Destructor Called" << std::endl;
}
