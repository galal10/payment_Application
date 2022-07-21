/*
 * card.h
 *
 *  Created on: Jul 18, 2022
 *      Author: galal
 */

#ifndef CARD_CARD_H_
#define CARD_CARD_H_



#define uint8_t unsigned char


typedef struct ST_cardData_t
{
uint8_t cardHolderName[25];
uint8_t primaryAccountNumber[20];
uint8_t cardExpirationDate[6];
}ST_cardData_t;


typedef enum EN_cardError_t
{
OK_CARD, WRONG_NAME, WRONG_EXP_DATE, WRONG_PAN
}EN_cardError_t;


EN_cardError_t getCardHolderName(ST_cardData_t *cardData);
EN_cardError_t getCardExpiryDate(ST_cardData_t *cardData);
EN_cardError_t getCardPAN(ST_cardData_t *cardData);


#endif /* CARD_CARD_H_ */
