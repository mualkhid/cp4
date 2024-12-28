/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:01 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:26:03 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : type("Default") {
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

AMateria::AMateria(st_ const &type) {
	std::cout << RED "Constructor Called" RESET << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria &copy) {
	std::cout << RED "Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

st_ const &AMateria::getType() const {
	return (type);
}

AMateria &AMateria::operator=(const AMateria &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, const ICharacter& dt) {
	os << dt.getName();
	return (os);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Nothing " << target << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "Character Destructor Called" << std::endl;
}
