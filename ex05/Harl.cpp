/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:55:20 by masmar            #+#    #+#             */
/*   Updated: 2025/02/08 17:20:23 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*actions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {  "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*actions[i])();
			return;
		}
	}
	std::cout << "Invalid level: " << level << std::endl;
}
