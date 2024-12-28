/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:11:48 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:11:49 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat( void );
		Cat( st_ type );
		Cat( const Cat &copy );
		Cat &operator=(const Cat &b);
		void	makeSound() const;
		~Cat( void );
};

#endif
