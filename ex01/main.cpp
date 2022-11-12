/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:58:47 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 15:53:19 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <time.h>

int get_random()
{
	return std::rand() % 100;
}

int main()
{
	srand(time(NULL));

	int n = 3;
	string str_arr[n];

	str_arr[0] = "stroka 11111";
	str_arr[1] = "stroka 22222";
	str_arr[2] = "stroka 33333";
	::iter(str_arr, n, &(::p_t));

	int x = 5;
	int	int_arr[x];

	for (int i = 0; i < x; i++)
		int_arr[i] = get_random();
	::iter(int_arr, x, &(::p_t));
	
	return (0);
}
