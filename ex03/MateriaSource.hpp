/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:20:47 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/12 16:34:27 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource( void );
	~MateriaSource( void );

	void learnMateria( AMateria* materia );
	AMateria* createMateria( std::string const& type );
};

MateriaSource::MateriaSource( void )
{
}

MateriaSource::~MateriaSource( void )
{
} 

void	MateriaSource::learnMateria( AMateria* materia )
{
	
}
AMateria*	MateriaSource::createMateria( std::string const& type )
{
	
}

#endif
