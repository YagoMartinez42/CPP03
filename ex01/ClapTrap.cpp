/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:39:06 by samartin          #+#    #+#             */
/*   Updated: 2024/04/09 16:30:32 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors (Default, copy, set name) and destructor */

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hp = 10;
	this->ep = 10;
	this->attDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& orig)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = orig.name;
	this->hp = orig.hp;
	this->ep = orig.ep;
	this->attDmg = orig.attDmg;
}

ClapTrap::ClapTrap(const std::string& nameP)  : name(nameP)
{
	std::cout << "Naming constructor called" << std::endl;
	this->hp = 10;
	this->ep = 10;
	this->attDmg = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

/* Asignment operator function */

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "Asignment operator called" << std::endl;
	if (this != &ct)
	{
		this->name = ct.name;
		this->ep = ct.ep;
		this->hp = ct.hp;
		this->attDmg = ct.attDmg;
	}
	return (*this);
}

/* Robot action functions */

void ClapTrap::attack(const std::string& target)
{
	if (!this->hp)
		std::cout << "ClapTrap " << this->name << " can't attack because it is down." << std::endl;
	else if (!this->ep)
		std::cout << "ClapTrap " << this->name << " can't attack because it has no energy." << std::endl;
	else
	{
		this->ep--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attDmg << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hp)
		std::cout << "ClapTrap " << this->name << " is already down." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " suffers " << amount << " points of damage!" << std::endl;
	if (amount >= this->hp)
	{
		this->hp = 0;
		std::cout << "ClapTrap " << this->name << " is defeated!" << std::endl;
	}
	else
		this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hp)
		std::cout << "ClapTrap " << this->name << " can't repair itself because it is almost destroyed." << std::endl;
	else if (!this->ep)
		std::cout << "ClapTrap " << this->name << " can't repair itself because it has no energy." << std::endl;
	else
	{
		this->ep--;
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " gets  " << amount << " points of damage repaired " << std::endl;
	}
}
