/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:53:30 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 13:11:34 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name){
	if (N <= 0)
		return NULL;
		
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i){
		horde[i].setName(name);
	}
	return horde;
}
