/*
 * card.c
 *
 *  Created on: Jul 18, 2022
 *      Author: galal
 */

#include <stdio.h>
#include <string.h>
#include "card.h"


EN_cardError_t getCardHolderName(ST_cardData_t *cardData)
{
	printf("Enter your name: ");
	fflush(stdin); fflush(stdout);
	gets((char *)cardData->cardHolderName);

	if(strlen((char *)cardData->cardHolderName)>24 || strlen((char *)cardData->cardHolderName)<20)
		return WRONG_NAME;

	return OK_CARD;
}


EN_cardError_t getCardExpiryDate(ST_cardData_t *cardData)
{

	printf("Enter card expiry date: ");
	fflush(stdin); fflush(stdout);
	gets((char*)cardData->cardExpirationDate);

	if((strlen((char *)cardData->cardExpirationDate))!=5)
		return WRONG_EXP_DATE;

	return OK_CARD;
}



EN_cardError_t getCardPAN(ST_cardData_t *cardData)
{
	printf("the card's Primary Account Number: ");
	fflush(stdin); fflush(stdout);
	gets((char *)cardData->primaryAccountNumber);

	if((strlen((char *)cardData->primaryAccountNumber)<16) || (strlen((char *)cardData->primaryAccountNumber)>19))
		return WRONG_PAN;

	return OK_CARD;
}
