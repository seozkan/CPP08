/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:15:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/04/23 08:37:49 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(1);
    numbers.push_back(17);
    numbers.push_back(18);
    numbers.push_back(17);
    try
    {
        easyfind(numbers, 17);
        easyfind(numbers, 3);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}
