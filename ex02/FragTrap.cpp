/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:48:44 by samartin          #+#    #+#             */
/*   Updated: 2024/04/10 15:37:26 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors (Default, copy, set name) and destructor */

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default constructor for child class FragTrap called" << std::endl;
	this->name = "";
	this->hp = 100;
	this->ep = 100;
	this->attDmg = 30;
}

FragTrap::FragTrap(const FragTrap& orig) : ClapTrap(orig)
{
	std::cout << "Copy constructor for child class FragTrap called" << std::endl;
	this->name = orig.name;
	this->hp = orig.hp;
	this->ep = orig.ep;
	this->attDmg = orig.attDmg;
}

FragTrap::FragTrap(const std::string& nameP)  : ClapTrap(nameP)
{
	std::cout << "Naming constructor for child class FragTrap called" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->attDmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for child class FragTrap called" << std::endl;
}


/* Asignment operator function */

FragTrap& FragTrap::operator=(const FragTrap& st)
{
	std::cout << "Asignment operator for child class FragTrap called" << std::endl;
	if (this != &st)
	{
		this->name = st.name;
		this->ep = st.ep;
		this->hp = st.hp;
		this->attDmg = st.attDmg;
	}
	return (*this);
}


/* Robot action functions */

void FragTrap::highFivesGuys()
{
	if (!this->hp)
		std::cout << "FragTrap " << this->name << " can't move its arms because it's down." << std::endl;
	else if (!this->ep)
		std::cout << "FragTrap " << this->name << " can't move its arms because it's out of energy." << std::endl;
	else
		std::cout << "FragTrap " << this->name << " raises its hand asking for a high-five." << std::endl;
}
