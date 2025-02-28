/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:31:13 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 14:54:15 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name(name){}

Zombie:: ~Zombie() {
	std::cout << name << " is destroyed!" << std::endl;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
