/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:03:18 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/11 14:45:24 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
protected:
	std::string		_type;
	
public:
	// AMateria( void );
	AMateria( std::string const & type );
	AMateria( const AMateria& other );
	AMateria& operator=( const AMateria& other );
	~AMateria( void );

	
	std::string const& getType( void ) const; //Returns the materia type
	virtual AMateria* clone( void ) const = 0;
	// virtual void use( ICharacter& target );
};

AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria has been created." << std::endl;
	_type = type;
}

AMateria::AMateria( const AMateria& other )
{
	*this = other;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}


AMateria::~AMateria( void )
{
	std::cout << "AMateria has been destroyed." << std::endl;
}



std::string const& AMateria::getType( void ) const
{
	return (this->_type);
}



#endif