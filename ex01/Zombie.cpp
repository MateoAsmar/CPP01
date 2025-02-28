/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:53:18 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 13:13:49 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string& name) : name(name) {}

Zombie::~Zombie(){
	std::cout << name << " is destroyed!" << std::endl;
}

void Zombie::setName(const std::string& name){
	this->name = name;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
