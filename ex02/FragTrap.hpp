/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:55:59 by samartin          #+#    #+#             */
/*   Updated: 2024/04/10 15:05:16 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& orig);
		FragTrap(const std::string& nameP);
		~FragTrap();
		FragTrap& operator=(const FragTrap& ct);
		void attack(const std::string& target);
		void highFivesGuys();
};
#endif