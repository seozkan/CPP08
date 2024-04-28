/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/04/23 14:56:32 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main()
{
	//TEST MYSTACK 
	std::cout << COLOR_MAGENTA << "TEST MYSTACK " << COLOR_RESET << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(21);
	mstack.push(14);
	std::cout << COLOR_YELLOW << "The top value of the stack is: " << COLOR_RESET << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << COLOR_BLUE << "Let's pop one element from the stack, " <<  "now the size is: " << mstack.size() << " and the top element is " << mstack.top() << std::endl << std::endl;
	
	mstack.push(5);
	mstack.push(2);
	mstack.push(1);
	mstack.push(6);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << COLOR_GREEN << "Let's iterate over the stack and print the values: " << COLOR_RESET << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	std::cout << COLOR_GREEN << "Let's iterate over the stack using reverse iterators and print the values: "  << COLOR_RESET << std::endl  << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}
	std::cout << std::endl;

	//TEST STANDART LIST STACK 

	std::cout << COLOR_MAGENTA << "TEST STANDART LIST STACK " << COLOR_RESET << std::endl << std::endl;
	std::list<int> list_stack;
	list_stack.push_back(21);
	list_stack.push_back(14);
	std::cout << COLOR_YELLOW << "The top value of the stack is: " << COLOR_RESET << list_stack.front() << std::endl << std::endl;
	list_stack.pop_back();
	std::cout << COLOR_BLUE << "Let's pop one element from the stack" <<  ", now the size is: " << list_stack.size() << " and the top element is " << list_stack.front() << COLOR_RESET <<  std::endl <<std::endl;
	list_stack.push_back(5);
	list_stack.push_back(2);
	list_stack.push_back(1);
	list_stack.push_back(6);
	std::list<int>::iterator itl = list_stack.begin();
	std::list<int>::iterator itle = list_stack.end();
	++itl;
	--itl;
	std::cout << COLOR_GREEN <<  "Let's iterate over the stack and print the values: "  << COLOR_RESET << std::endl << std::endl;

	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::list<int>::reverse_iterator ritl = list_stack.rbegin();
	std::list<int>::reverse_iterator ritle = list_stack.rend();
	std::cout << std::endl;
	std::cout << COLOR_GREEN << "Let's iterate over the stack using reverse iterators and print the values: "  << COLOR_RESET << std::endl  << std::endl;
	while (ritl != ritle)
	{
		std::cout << *ritl << std::endl;
		ritl++;
	}
	std::cout << std::endl;
	
	return 0;
}
