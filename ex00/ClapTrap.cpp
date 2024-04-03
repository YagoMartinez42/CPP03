/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:39:06 by samartin          #+#    #+#             */
/*   Updated: 2024/04/03 15:40:29 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors (Default, copy, set name) and destructor */

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(const ClapTrap& orig)
{

}

ClapTrap::ClapTrap(const std::string& nameP)  : name(nameP)
{

}

ClapTrap::~ClapTrap()
{

}


/* Robot action functions */

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}