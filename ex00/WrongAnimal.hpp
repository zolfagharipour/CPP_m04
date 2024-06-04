/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:13:52 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/04 16:09:18 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>


class WrongAnimal
{
protected:
    std::string     _type;
    
public:
    WrongAnimal( void );
    WrongAnimal( const WrongAnimal& other );
    WrongAnimal& operator=( const WrongAnimal& other );
    virtual ~WrongAnimal( void );

    std::string     getType( void )const;
    virtual void    makeSound( void )const;
};


#endif
