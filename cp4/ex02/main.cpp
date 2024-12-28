/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:25:28 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:25:30 by mualkhid         ###   ########.fr       */
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
    index = -1;
    while (++index < 20)
        delete meta[index];
}
