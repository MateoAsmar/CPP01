/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:25:12 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 15:41:35 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void attack() const;
};

#endif
