/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:38:01 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 10:56:32 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {

	if (ac == 2) {
		ScalarConverter::convert(av[1]);
	}
	else 
		std::cout << "Needs char, int, double or float in parameter" << std::endl;
	return 0;
}