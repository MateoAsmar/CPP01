/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:52:21 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 13:07:25 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name);

int main() {
	int numZombies = 5;
	std::string hordeName = "HordeZombie";

	Zombie* horde = zombieHorde(numZombies, hordeName);

	for (int i = 0; i < numZombies; ++i)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
