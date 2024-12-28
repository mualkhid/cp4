/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:56 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:26:58 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice( void );
		Ice(st_ const & type);
		Ice(Ice &copy);
		st_ const & getType() const; //Returns the materia type
		AMateria* clone() const;
		Ice &operator=(const Ice &b);
		void use(ICharacter& target);
		~Ice();
};

#endif
