/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:27:48 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 15:09:27 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string& name);
void	randomChump(const std::string& name);

int main() {
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	randomChump("StackZombie");

	delete heapZombie;

	return 0;
}
