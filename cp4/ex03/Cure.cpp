/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:39 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:25:59 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << CYAN "Cure Default Constructor Called" RESET << std::endl;
	type = "cure";
}

Cure::Cure( Cure &copy ) : AMateria(copy) {
	std::cout << CYAN "Cure copy Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

Cure::Cure(st_ const &type) {
	std::cout << CYAN "cure Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &Cure::getType() const {
	return (type);
}

AMateria* Cure::clone() const {
	return (new Cure());
}

Cure &Cure::operator=(const Cure &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure::~Cure() {
	std::cout << RED "Cure Destructor Called" RESET << std::endl;
}
