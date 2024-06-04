/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:13:03 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/04 17:50:03 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
    std::string     _ideas[100];
public:
    Brain( void );
    Brain( const Brain& other );
    Brain& operator=( const Brain& other );
    ~Brain( void );

    void        setIdea( int i, std::string idea );
    std::string getIdea( int i);
};


#endif
