/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:25:38 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 15:52:51 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon(const std::string &type);
		const std::string &getType() const;
		void setType(const std::string &newType);
};

#endif
