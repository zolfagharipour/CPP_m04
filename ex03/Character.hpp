/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:48:44 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/11 17:00:21 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria*	_materia;
	bool		_index[4];
	std::string	_name;
	
public:
	Character( std::string name );
	Character( const Character& other );
	Character& operator=( const Character& other );
	~Character();

	std::string const & getName( void ) const;
	void equip( AMateria* m );
	void unequip( int idx );
	void use( int idx, ICharacter& target );
};

Character::Character( std::string name )
{
	std::cout << "Character " << name << " has been created." << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_index[i] = 0;
}

Character::Character( const Character& other )
{
	std::cout << "Character " << other._name << " has been created." << std::endl;
	*this = other;
}

Character& Character::operator=( const Character& other )
{
	if (this == &other)
		return (*this);
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (_index[i])
			delete (&_materia[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		_index[i] = other._index[i];
		if (_index[i])
			_materia[i] = other._materia[i];
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character " << _name << " has been destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_index[i])
			delete (&_materia[i]);
	}
}


std::string const& Character::getName( void ) const
{
	return (_name);
}

void Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++)
	{
		if (_index[i])
		{
			_materia[i] = *m;
			return ;
		}
	}
}

void Character::unequip( int idx )
{
	if (!_index[idx])
	{
		
	}
}

void Character::use( int idx, ICharacter& target )
{

}


#endif