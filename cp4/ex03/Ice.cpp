/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:52 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:25:48 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	std::cout << BLUE "Ice Default Constructor Called" RESET << std::endl;
	this->type = "ice";
}

Ice::Ice( Ice &copy ) : AMateria(copy) {
	std::cout << BLUE "Ice copy Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

Ice::Ice(st_ const &type) {
	std::cout << BLUE "Ice Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &Ice::getType() const {
	return (type);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

Ice &Ice::operator=(const Ice &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << RED "Ice Destructor Called" RESET << std::endl;
}
