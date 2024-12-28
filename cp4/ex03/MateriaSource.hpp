/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:27:22 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:27:25 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
	private :
		AMateria	*slots[4];
	public :
		MateriaSource( void );
		void learnMateria(AMateria *copy);
		MateriaSource( const MateriaSource &copy );
		AMateria* createMateria(std::string const & type);
		MateriaSource &operator=(const MateriaSource &b);
		~MateriaSource();
};

#endif
