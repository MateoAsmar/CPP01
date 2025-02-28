/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:12:45 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 15:18:44 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;

	std::string& stringREF = brain;

	std::cout << "Memory address of the string variable: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}
