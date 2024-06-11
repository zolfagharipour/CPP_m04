/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:41:17 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/11 16:27:27 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string		_name;
	
public:
	Ice( std::string name );
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	~Ice( void );

	std::string	getName( void ) const;
	AMateria*	clone( void ) const;
	void use( ICharacter& target );
};

Ice::Ice( std::string name ) : AMateria("ice")
{
	std::cout << "Ice has been created." << std::endl;
	_name = name;
}

Ice::Ice( const Ice& other ) : AMateria("ice")
{
	std::cout << "Ice has been created." << std::endl;
	*this = other;
}

Ice& Ice::operator=( const Ice& other )
{
	if (this == &other)
		return (*this);
	this->_name = other._name;
	return (*this);
}

Ice::~Ice( void )
{
	std::cout << "Ice has been destroyed." << std::endl;
	
}

std::string	Ice::getName( void ) const
{
	return (this->_name);
}

AMateria*	Ice::clone( void ) const
{
	AMateria*	ice = new Ice(_name);
	return (ice);
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


#endif