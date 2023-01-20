/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:11:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/20 14:33:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void banner(void)
{	
ft_printf("\n");
ft_printf("%s\t\t\t\t\t\t░██████╗░█████╗░░░░░░░██╗░░░░░░█████╗░███╗░░██╗░██████╗░\n", GREEN);
ft_printf(" \t\t\t\t\t\t██╔════╝██╔══██╗░░░░░░██║░░░░░██╔══██╗████╗░██║██╔════╝░\n");
ft_printf(" \t\t\t\t\t\t╚█████╗░██║░░██║█████╗██║░░░░░██║░░██║██╔██╗██║██║░░██╗░\n");
ft_printf(" \t\t\t\t\t\t░╚═══██╗██║░░██║╚════╝██║░░░░░██║░░██║██║╚████║██║░░╚██╗\n");
ft_printf(" \t\t\t\t\t\t██████╔╝╚█████╔╝░░░░░░███████╗╚█████╔╝██║░╚███║╚██████╔╝\n");
ft_printf(" \t\t\t\t\t\t╚═════╝░░╚════╝░░░░░░░╚══════╝░╚════╝░╚═╝░░╚══╝░╚═════╝░%s\n\n", END);
ft_printf("%s\t\t\t\t\t\t\t\t --* ʙʏ ᴇᴍᴏʜᴀᴍᴇᴅ *--%s\n", YELLOW, END);
}