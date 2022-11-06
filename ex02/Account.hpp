/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:25:38 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/06 21:19:02 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __ACCOUNT_H__
# define __ACCOUNT_H__

class Account
{
private:
	Account(void);
public:

	typedef Account 	t;

	void	displayAccountsInfos(void);
	void	displayTimeStamp(void);
	void	displayStatus(void) const;
	void	makeDeposit(int deposit);
	bool	makeWithdrawal(int withdrawal);
	Account(int	i);
	~Account(void);
};
#endif