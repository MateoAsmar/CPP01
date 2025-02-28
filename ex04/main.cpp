/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:20:07 by masmar            #+#    #+#             */
/*   Updated: 2025/02/08 12:54:26 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

bool isFileAvailable(const std::string& filename)
{
	std::ifstream file(filename);
	return file.is_open();
}

std::string replaceString(std::string s1, const std::string s2, const std::string s3)
{
	size_t pos = 0;
	std::string result = "";

	while (pos < s1.length()){
		size_t positionFound = s1.find(s2, pos);

		if (positionFound != std::string::npos) {
			result += s1.substr(pos, positionFound - pos);
			result += s3;
			pos = positionFound + s2.length();
		} else {
			result += s1.substr(pos);
			break;
		}
	}
	return result;
}

int main (int argc, char **argv)
{
	std::string filename;
	std::string replacedFile;
	std::string finalString;

	if (argc != 4)
		return 1;
	
	filename = argv[1];
	replacedFile = filename + ".replace";
	if (!isFileAvailable(filename))
		return 1;
		
	std::ifstream input_file(filename);
	if (!input_file)
		return 1;

	std::stringstream buffer;
	buffer << input_file.rdbuf();

	std::string content = buffer.str();

	finalString = replaceString(content, argv[2], argv[3]);

	input_file.close();

	std::ofstream output_file(replacedFile);
	if (!output_file)
		return 1;

	output_file << finalString;

	output_file.close();

	return 0;
}
