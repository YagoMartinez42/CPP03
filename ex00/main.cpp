/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:06:33 by samartin          #+#    #+#             */
/*   Updated: 2024/04/09 14:05:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob = ClapTrap();
	ClapTrap mike = ClapTrap("Mike");
	ClapTrap mike2 = ClapTrap(mike);
	bob.attack("Mike");
	mike.takeDamage(8);
	mike.beRepaired(10);
	mike2.takeDamage(30);
	mike2.attack("Bob");
	std::cout << std::endl;
	return (0);
}
