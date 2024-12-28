/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:23:27 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:23:28 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( st_ type );
		WrongCat( const WrongCat &copy );
		void makeSound() const;
		st_	 getType( void ) const;
		WrongCat &operator=(const WrongCat &b);
		~WrongCat();
};

#endif
