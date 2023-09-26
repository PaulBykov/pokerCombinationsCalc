#include "deck.cpp"
#include <QRegularExpression>
#include <QSet>
#include <widget.h>




bool checkFlush(const QList<Card> hand) {
    ush count1, count2, count3, count4;
    for (auto card : hand) {
        if(card.getCardSuit())
    }

    return suits.size() < 3;  // Все карты имеют одну масть
}
