/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:24:20 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 15:34:27 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
		
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void attack() const;
};

#endif
