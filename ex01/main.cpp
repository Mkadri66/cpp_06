/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:02:26 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/23 11:35:05 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int	main() {

	Data	data;

	data.content = "Hello World !";;
	std::cout << data.content << std::endl;

	std::cout << &data << std::endl;
	uintptr_t serialized = Serializer::serialize(&data);
	std::cout << serialized << std::endl;

	Data* deserializedData = Serializer::deserialize(serialized);
	std::cout << deserializedData << std::endl;
	
	return 0;
}