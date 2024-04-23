/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:43:53 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/23 09:01:46 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() : N(0) {}
Span::Span(unsigned int N) : N(N) {}
Span::Span(const Span &other) : N(other.N), numbers(other.numbers) {}
Span::~Span() {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->numbers = other.numbers;
    }
    return *this;
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Cannot find span with less than 2 numbers.");
    std::sort(numbers.begin(), numbers.end());
    int maxSpan = numbers[numbers.size() - 1] - numbers[0];
    return maxSpan;
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Cannot find span with less than 2 numbers.");
    std::sort(numbers.begin(), numbers.end());
    int minSpan = numbers[1] - numbers[0];
    for (size_t i = 2; i < numbers.size(); ++i)
        minSpan = std::min(minSpan, numbers[i] - numbers[i - 1]);
    return minSpan;
}

void Span::addNumber(int num)
{
    if (numbers.size() >= N)
        throw std::runtime_error("Maximum capacity reached. Cannot add more numbers.");
    numbers.push_back(num);
}