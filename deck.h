#ifndef DECK_H
#define DECK_H

#include <QStringList>

extern QStringList deckCompoundNums;
extern QStringList suits;
extern const unsigned short deckSize;

class Card{
  public:
    QString getCardSuit();
    QString getCardValue();
    void setCardSuit(QString);
    void setCardValue(QString);
    Card(QString val, QString Suit);

  private:
    QString value;
    QString suit;
};

class Deck{
public:
    QList<Card> deckCompound;

    Deck();

protected:
    void deckGenerate();
};

class Game{
    public:
      Deck deck;
      void Start();
};


#endif // DECK_H
