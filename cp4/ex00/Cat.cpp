/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:11:43 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:21:17 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat &Cat::operator=(const Cat &b) {
	std::cout << RED "Cat Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

Cat::Cat( void ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	type = "Cat";
}

Cat::Cat( st_ set ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	this->type = set;
}

Cat::Cat( const Cat &obj ) : Animal(obj)  {
	std::cout << RED "Cat Copy Constructor Called" RESET << std::endl;
	*this = obj;
}

void	Cat::makeSound() const  {
	std::cout << "Cat " << this->type << BLUE " : Meeeeeeeooow 🐱🐱" RESET << std::endl;
}

Cat::~Cat() {
	std::cout << RED "Cat Destructor Called" RESET << std::endl;
}
