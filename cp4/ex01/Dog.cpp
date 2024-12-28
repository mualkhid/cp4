/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:22:43 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/27 17:22:46 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog &Dog::operator=(const Dog &b) {
	std::cout << RED "Dog Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		delete	idea;
		idea = new Brain(*b.idea);
		this->type = b.type;
	}
	return (*this);
}

Dog::Dog( void ) {
	std::cout << RED "Dog Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	type = "Dog";
}

Dog::Dog( st_ type ) {
	std::cout << RED "Dog Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	this->type = type;
}

Dog::Dog( const Dog &obj ) : Animal(obj) {
	std::cout << RED "Dog Copy Constructor Called" RESET << std::endl;
	this->idea = new Brain();
	*this = obj;
}

void	Dog::makeSound() const {
	std::cout << "Dog " << this->type << BLUE " : Simp Simp 🐶🐶" RESET << std::endl;
}

Dog::~Dog() {
	std::cout << RED "Dog Destructor Called" RESET << std::endl;
	delete idea;
}
