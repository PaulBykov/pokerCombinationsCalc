#pragma once
#include "widget.h"
#include "deck.h"

QStringList deckCompoundNums = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"};
QStringList suits = {"♠", "♣", "♥", "♦"};
const ush deckSize = 52;


QString Card::getCardSuit(){
    return suit;
}

QString Card::getCardValue(){
    return value;
}

void Card::setCardValue(QString val){
    value = val;
}

void Card::setCardSuit(QString sui){
    suit = sui;
}

Card::Card(QString val, QString Suit){
    this->value = val;
    this->suit = Suit;
}

Deck::Deck(){
    deckGenerate();
}

void Deck::deckGenerate(){
    for (auto i = 0; i < deckSize; ++i) {
        Card temp(deckCompoundNums[i / 4], suits[i % 4]);
        deckCompound.append(temp);
    }
}

void Game::Start(){
    return;
}
