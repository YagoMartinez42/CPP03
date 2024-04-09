/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:08:59 by samartin          #+#    #+#             */
/*   Updated: 2024/04/09 16:58:53 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor for child class ScavTrap called" << std::endl;
	this->name = "";
	this->hp = 100;
	this->ep = 50;
	this->attDmg = 10;
}

ScavTrap::ScavTrap(const ScavTrap& orig) : ClapTrap(orig)
{
	std::cout << "Copy constructor for child class ScavTrap called" << std::endl;
	this->name = orig.name;
	this->hp = orig.hp;
	this->ep = orig.ep;
	this->attDmg = orig.attDmg;
}

ScavTrap::ScavTrap(const std::string& nameP)  : ClapTrap(nameP)
{
	std::cout << "Naming constructor for child class ScavTrap called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->attDmg = 10;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for child class ScavTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	std::cout << "Asignment operator for child class ScavTrap called" << std::endl;
	if (this != &st)
	{
		this->name = st.name;
		this->ep = st.ep;
		this->hp = st.hp;
		this->attDmg = st.attDmg;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->hp)
		std::cout << "ScavTrap " << this->name << " can't attack because it's toasted." << std::endl;
	else if (!this->ep)
		std::cout << "ScavTrap " << this->name << " can't attack because it's dry of energy." << std::endl;
	else
	{
		this->ep--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " dealing " << this->attDmg << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (!this->hp)
		std::cout << "ScavTrap " << this->name << " can't activate its abilities because it's down." << std::endl;
	else if (!this->ep)
		std::cout << "ScavTrap " << this->name << " can't activate its abilities because it's out of energy." << std::endl;
	else
	{
		this->ep--;
		std::cout << "ScavTrap " << this->name << " activates its Guard Gate!" << std::endl;
	}
}
