/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:23:00 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:23:02 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta[20];
    int     index;

    index = -1;
    while (++index < 20)
    {
        if (index < 10)
            meta[index] = new Dog();
        else
            meta[index] = new Cat();
    }
    // *meta[0] = *meta[20];
    index = -1;
    while (++index < 20)
        delete meta[index];
}
