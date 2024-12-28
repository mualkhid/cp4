/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:45 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:26:47 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure( void );
		Cure(st_ const & type);
		Cure(Cure &copy);
		st_ const & getType() const; //Returns the materia type
		AMateria* clone() const;
		Cure &operator=(const Cure &b);
		void use(ICharacter& target);
		~Cure();
};

#endif
