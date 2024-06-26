/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:06:33 by samartin          #+#    #+#             */
/*   Updated: 2024/04/10 14:42:32 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap noOne = ScavTrap();
	ScavTrap jim = ScavTrap("Jim");
	ScavTrap jim2 = ScavTrap(jim);

	for (int i = 0; i < 51; i++)
	{
		jim.attack("you");
	}
	jim2.attack("me");
	jim2.guardGate();
	noOne.guardGate();
	jim.beRepaired(5);
	std::cout << std::endl;
	return (0);
}
