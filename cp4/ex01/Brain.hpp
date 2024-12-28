/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:22:24 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:22:24 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	private:
		st_	ideas[100];
	public:
		Brain( void );
		Brain( st_ idea );
		Brain &operator=(const Brain &b);
		Brain( const Brain &copy );
		~Brain();
};

#endif
