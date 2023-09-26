#include "deck.h"
#include "widget.h"
#include "QRegularExpression"

#define CARDVIEW card.getCardValue()+card.getCardSuit()
#define SUIT card.getCardSuit()
#define VAL card.getCardValue()


class CardAnalyzer{
public:
    Deck deck;


    void cardSort(QList<Card> &cardList){
        QList<Card> cardString;
        QStringList cards;

        foreach(Card card, cardList){
              cards.append(VAL + SUIT);
        }

        cards.sort();


        for(auto i = 0; i < cards.size(); ++i){
            Card card = cardList[i];
            card.setCardValue(cards[i][0] + "");
            card.setCardSuit(cards[i][1] + "");
        }

    }


    int cardFinder(QString card, QStringList cardList){
        int begin = 0, end = cardList.size() - 1, curr = (begin + end) / 2;
        QString Element;

        while(Element != card){

            if(Element[0] > card[0]){
                end = curr;
            }
            else{
                begin = curr;
            }

            Element = cardList[curr];
        }

        return curr;
    }


    /*
    QStringList ComboBoxHandler(QList<QComboBox*> comboBoxes){
        QStringList comboBoxesText;
        QComboBox temp;
        for(auto i = 0; i < comboBoxes.size(); ++i){
            comboBoxesText.append(comboBoxes[i]->currentText());
        }

        return comboBoxesText;
    }

    QStringList potentialCombinations(QList<Card> hand){
        QStringList combinations;
        QStringList pairs, sets, straights, fleshes, fours, fullhauses;


        foreach(Card card, hand){


            // pair
            for(auto i = 0; i < 4; ++i){
                if(suits[i] == SUIT){
                    continue;
                }
                pairs.append(CARDVIEW + " " + VAL + suits[i]);
            }



            // set
            for(auto i = 0; i < 4; ++i){
                if(suits[i] == SUIT){
                    continue;
                }
                else if(suits[(i + 1) % 4] == SUIT){
                    sets.append(CARDVIEW + " " + VAL + suits[i] + " " + VAL + suits[(i + 2) % 4]);
                }
                else{
                sets.append(CARDVIEW + " " + VAL + suits[i] + " " + VAL + suits[(i + 1) % 4]);
                }
           }



            // four of kind
            fours.append(VAL + suits[0] + " " + VAL + suits[1] + " " + VAL + suits[2] + " " + VAL + suits[3]);


        }




        combinations += pairs + sets + straights + fleshes + fours + fullhauses;
        return combinations;

    }

    */

    QString cardHandler(QList<Card> cardList){
          QString cardString;
          QStringList cards;

          foreach(Card card, cardList){
                cards.append(VAL + SUIT + " ");
          }

          cards.sort();


          cardString = cards.join(" ");

          return cardString;
    }

    ush getRank(QList<Card> cardList){
        ush sum = 0;
        cardSort(cardList);






        sum += 0;

        return sum;
    }

    ush resultAnalyzer(QList<Card> hand, QList<Card> table, QList<Card> enemy){


        return 0;
    }



};


