/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:23:50 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 13:24:04 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"

int main()
{
	int test; 
	test = 15;
	int recup;
	recup = ft_printf("ceci est un i : %i\n suivi d'une string  %s et d'un float %% merci. \n", test, "Exact");
	printf("\tmien : %d\n", recup);

	recup = printf("ceci est un i : %i\n suivi d'une string  %s et d'un float %% merci. \n", test, "Exact");
	printf("\tvrai : %d\n", recup);

	recup = ft_printf("ceci est un i : %i\n", 0xa);
	printf("\tmien : %d\n", recup);
	recup = printf("ceci est un i : %i\n", 0xa);
	printf("\tmien : %d\n", recup);
	
	recup = ft_printf("ceci est un i : %i\n", 042);
	printf("\tmien : %d\n", recup);
	recup = printf("ceci est un i : %i\n", 042);
	printf("\tmien : %d\n", recup);
	
	recup = ft_printf("ceci est un i : %i\n", 10);
	printf("\tmien : %d\n", recup);
	recup = printf("ceci est un i : %i\n", 10);
	printf("\tmien : %d\n", recup);
	
	recup = ft_printf("ceci est un i : %i\n", -15);
	printf("\tmien : %d\n", recup);
	recup = printf("ceci est un i : %i\n", -15);
	printf("\tmien : %d\n", recup);
	
	recup = ft_printf("ceci est un i : %i\n", 1);
	printf("\tmien : %d\n", recup);
	recup = printf("ceci est un i : %i\n", 1);
	printf("\tmien : %d\n", recup);
}
