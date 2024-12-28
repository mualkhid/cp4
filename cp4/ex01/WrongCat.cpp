/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:23:20 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:23:22 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << GREEN "WrongCat Default Constructor Called" RESET << std::endl;
	this->type = "pispisnaw";
}

WrongCat::WrongCat( st_ type ) {
	std::cout << GREEN "WrongCat Constructor Called" RESET << std::endl;
	this->type = type;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy) {
	std::cout << GREEN "WrongCat Default Constructor Called" RESET << std::endl;
	*this = copy;
}

void	WrongCat::makeSound() const  {
	std::cout << "WrongCat " << this->type << BLUE " : WAAAAAAAAAAAAAA" RESET << std::endl;
}

st_		WrongCat::getType( void ) const {
	return (this->type);
}

WrongCat &WrongCat::operator=(const WrongCat &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}


WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}
