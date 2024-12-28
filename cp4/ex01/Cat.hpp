/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:22:38 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:22:39 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain	*idea;
	public :
		Cat( void );
		Cat( st_ type );
		Cat( const Cat &copy );
		Cat &operator=(const Cat &b);
		void	makeSound() const;
		~Cat( void );
};

#endif
