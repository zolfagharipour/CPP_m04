/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:57:54 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/04 17:26:22 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    std::cout << "A Cat has been born!" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::~Cat( void )
{
    delete _brain;
    std::cout << "Cat has died!" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "MeeoOWWww..." << std::endl;
}
