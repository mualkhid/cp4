/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:12:06 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:12:07 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog( void );
		Dog( st_ type );
		Dog( const Dog &copy );
		Dog &operator=(const Dog &b);
		void	makeSound() const;
		~Dog( void );
};

#endif
