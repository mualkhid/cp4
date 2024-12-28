/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:25:01 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:25:03 by mualkhid         ###   ########.fr       */
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
		void print() {
			for (int i = 0; i < 100; i++){
				std::cout << ideas[i] << std::endl;
			}
		}
		void set(std::string str) {

			for (int i = 0; i < 100; i++){
				 ideas[i] = str;
			}
		}
		Brain &operator=(const Brain &b);
		Brain( const Brain &copy );
		~Brain();
};

#endif
