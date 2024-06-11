/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:48:44 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/11 15:38:32 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria*	_materia;
	int			_index;
	std::string	_name;
	
public:
	Character( std::string name );
	Character( const Character& other );
	Character& operator=( const Character& other );
	~Character();
};

Character::Character( std::string name )
{
	std::cout << "Character " << name << " has been created." << std::endl;
	_name = name;
	_index = -1;
}

Character::Character( const Character& other )
{
	*this = other;
}

Character& Character::operator=( const Character& other )
{
	if (this == &other)
		return (*this);
	this->_name = other._name;
	while(this->_index >= 0)
	{
		delete (&this->_materia[_index]);
		_index--;
	}	
	while (this->_index <= other._index)
	{
		this->_materia[this->_index] = other._materia[other._index];
		this->_index++;
	}
	this->_index--;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character " << _name << " has been destroyed." << std::endl;
	while (_index >= 0)
	{
		delete (&_materia[_index]);
		_index--;
	}
}


#endif