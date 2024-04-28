/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:43:48 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/23 13:00:32 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void ownTestRandom()
{
    Span span(10000);
    
    std::srand(time(0));
    for (size_t i = 0; i < 10000; i++)
    {
        span.addNumber(rand());
    }
    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}

void ownTestList()
{
    Span span(12);
    std::list<int> list;

    list.push_back(1);
    list.push_back(3);
    list.push_back(5);
    span.addRange<std::list<int> >(list.begin(), list.end());
    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}

void ownTestVector()
{
    Span span(12);
    std::vector<int> vec;

    vec.push_back(7);
    vec.push_back(13);
    vec.push_back(3);
    span.addRange<std::vector<int> >(vec.begin(), vec.end());
    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}

void subjectTest()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    try
    {
        std::cout << "------------- SUBJECT TEST -------------"<< std::endl;
        subjectTest();
        std::cout << "------------- OWN TEST RANDOM -------------" << std::endl;
        ownTestRandom();
        std::cout << "------------- OWN TEST VECTOR -------------" << std::endl;
        ownTestVector();
        std::cout << "------------- OWN TEST LIST -------------" << std::endl;
        ownTestList();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}