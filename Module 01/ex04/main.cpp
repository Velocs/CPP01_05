/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:50:41 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/24 19:15:44 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	check_file(std::string file_path, std::string to_be_replaced, std::string replacement);
void	replace(std::string file_path, std::string content,
					std::string to_be_replaced, std::string replacement);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr<< "Need 3 arguments: " << std::endl;
		return (0);
	}
	check_file(av[1], av[2], av[3]);
	return (0);
}

void	check_file(std::string file_path, std::string to_be_replaced, std::string replacement)
{
	std::ifstream	input_file(file_path);
	std::string		content;

	if (!input_file.is_open())
	{
		std::cerr << "Unable to open " << file_path << std::endl;
		input_file.close();
		return ;
	}
	if (!std::getline(input_file, content, '\0'))
	{
		std::cerr << file_path << " is empty" << std::endl;
		input_file.close();
		return ;
	}
	replace(file_path, content, to_be_replaced, replacement);
	input_file.close();
}

void	replace(std::string file_path, std::string content,
					std::string to_be_replaced, std::string replacement)
{
	std::ofstream	output_file(file_path + ".replace");
	size_t			pos;

	pos = content.find(to_be_replaced);
	while (pos != content.npos)
	{
		content.erase(pos, to_be_replaced.size());
		content.insert(pos, replacement);
		pos = content.find(to_be_replaced);
	}
	output_file << content;
	output_file.close();
}