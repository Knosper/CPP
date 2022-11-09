/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:25:38 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/07 15:50:24 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

#include <iostream>
#include <iomanip>

class Account
{

private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;
	static void	_displayTimestamp(void);
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account(void);
	
public:

	typedef Account		t;

	static int	getNbAccounts(void);
	static int	getTotalAmount(void);
	static int	getNbDeposits(void);
	static int	getNbWithdrawals(void);
	static void	displayAccountsInfos(void);
	Account(int initial_deposit);
	~Account(void);
	void	makeDeposit(int deposit);
	bool	makeWithdrawal(int withdrawal);
	int		checkAmount(void) const;
	void	displayStatus(void) const;
};

#endif
