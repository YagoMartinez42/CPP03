/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:39:27 by samartin          #+#    #+#             */
/*   Updated: 2024/04/09 16:36:11 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int attDmg;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& orig);
		ClapTrap(const std::string& nameP);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& ct);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif