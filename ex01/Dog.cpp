/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:58:03 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/04 17:26:27 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    std::cout << "A Dog has been born!" << std::endl;
    Animal::_type = "Dog";
    _brain = new Brain();
}

Dog::~Dog( void )
{
    delete _brain;
    std::cout << "A Dog has died!" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Wuff Wuff..." << std::endl;
}
