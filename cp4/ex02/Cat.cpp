/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:25:06 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:23:47 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat &Cat::operator=(const Cat &b) {
	std::cout << RED "Cat Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		delete	idea;
		idea = new Brain(*b.idea);
		this->type = b.type;
	}
	return (*this);
}

Cat::Cat( void ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	type = "Cat";
}

Cat::Cat( st_ set ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	this->type = set;
}

Cat::Cat( const Cat &obj ) : Animal(obj) {
	std::cout << RED "Cat Copy Constructor Called" RESET << std::endl;
	idea = new Brain();
	*this = obj;
}

void	Cat::makeSound() const  {
	std::cout << "Cat " << this->type << BLUE " : Mgheeeeeeew 🐱🐱" RESET << std::endl;
}

Cat::~Cat() {
	std::cout << RED "Cat Destructor Called" RESET << std::endl;
	delete idea;
}
