/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:24:57 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:24:58 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << GREEN "Brain Default Constructor Called" RESET  << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "no idea";
	}
}

Brain &Brain::operator=(const Brain &b) {
	std::cout << RED "Brain Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = b.ideas[i];
	}
	return (*this);
}

Brain::Brain( st_ idea ) {
	std::cout << GREEN "Brain Constructor Called" RESET  << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::Brain( const Brain &copy ) {
	std::cout << GREEN "Brain copy constructor Called" RESET << std::endl;
	*this = copy;
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}
