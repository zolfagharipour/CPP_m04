/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:30:43 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/11 14:38:51 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string		_name;
	
public:
	Cure( std::string name );
	Cure( const Cure& other );
	Cure& operator=( const Cure& other );
	~Cure( void );

	std::string	getName( void ) const;
	AMateria*	clone( void ) const;
};

Cure::Cure( std::string name ) : AMateria("cure")
{
	std::cout << "Cure has been created." << std::endl;
	_name = name;
}

Cure::Cure( const Cure& other ) : AMateria("cure")
{
	*this = other;
}

Cure& Cure::operator=( const Cure& other )
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);	
}

Cure::~Cure()
{
	std::cout << "Cure has been destroyed." << std::endl;
}


std::string	Cure::getName( void ) const
{
	return (this->_name);
}

AMateria*	Cure::clone( void ) const
{
	AMateria*	ice = new Cure(_name);
	return (ice);
}



#endif