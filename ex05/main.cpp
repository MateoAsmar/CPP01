/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:11:38 by masmar            #+#    #+#             */
/*   Updated: 2025/02/08 13:16:06 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl harl;

	std::cout << "Testing DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Testing INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "Testing WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Testing ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "Testing INVALID:" << std::endl;
	harl.complain("INVALID");
	std::cout << std::endl;
	
	return 0;
}
