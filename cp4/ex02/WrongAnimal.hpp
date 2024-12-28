/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:25:41 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:25:42 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define	st_ std::string
#include <iostream>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class WrongAnimal {
	protected :
		st_ type;
	public:
		WrongAnimal( void );
		WrongAnimal( st_ type );
		WrongAnimal( const WrongAnimal &copy );
		st_		getType( void ) const;
		virtual void	makeSound() const;
		WrongAnimal &operator=(const WrongAnimal &b);
		~WrongAnimal();
};

#endif
