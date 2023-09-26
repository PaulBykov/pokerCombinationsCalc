#include "deck.h"
#include "widget.h"

#define CARDVIEW cardList[i].getCardValue()+cardList[i].getCardSuit()

#define SUIT cardList[i].getCardSuit()
#define VAL cardList[i].getCardValue()

#define PREVSUIT cardList[i-1].getCardSuit()
#define PREVVAL cardList[i-1].getCardValue()

#define NEXTSUIT cardList[i+1].getCardSuit()
#define NEXTVAL cardList[i+1].getCardValue()


ush pairsCount(QList<Card> cardList){
    //pairs

    ush pairCount = 0;
    for(auto i = 0; i < cardList.size(); ++i){
        if(cardList[i].getCardValue() == cardList[i+1].getCardValue()){
            pairCount++;
        }
    }

    return pairCount;
}


bool isSet(QList<Card> cardList){
    for(auto i = 1; i < cardList.size() - 1; ++i){
        if(cardList[i-1].getCardValue() == cardList[i].getCardValue() == cardList[i+1].getCardValue()){

        }
    }


}
