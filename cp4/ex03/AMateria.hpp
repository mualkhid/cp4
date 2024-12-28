/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:06 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:26:08 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

#define st_ std::string
#include "ICharacter.hpp"

class AMateria
{
	protected :
		st_	type;
	public:
		AMateria( void );
		AMateria(st_ const & type);
		AMateria(AMateria &type);
		st_ const & getType() const;
		virtual AMateria* clone() const = 0;
		AMateria &operator=(const AMateria &b);
		virtual void use(ICharacter& target);
		virtual ~AMateria(void);
};

std::ostream &operator<<(std::ostream& os, const ICharacter& dt);

#endif
