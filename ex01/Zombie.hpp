/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:53:51 by masmar            #+#    #+#             */
/*   Updated: 2025/02/07 13:14:40 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie(const std::string& name);
		~Zombie();
		void setName(const std::string& name);
		void announce() const;
};

#endif
