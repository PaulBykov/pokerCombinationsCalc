#include "widget.h"
#include "ui_widget.h"
#include "deck.cpp"
#include "calc.cpp"

void Widget::handleButtonClicked()
{
    QList<QComboBox*> comboBoxes  = {ui->comboBox, ui->comboBox_2,ui->comboBox_3, ui->comboBox_4, ui->comboBox_5, ui->comboBox_6, ui->comboBox_7};
    QList<Card> hand;

    foreach(QComboBox* Combobox, comboBoxes){
        if(Combobox->currentText().isEmpty()){
            continue;
        }

        Card temp(Combobox->currentText()[0] + "", Combobox->currentText()[2] + "");
        hand.append(temp);
    }

    CardAnalyzer first;


    ui->label_3->setText(QString::number(first.getRank(hand)));
}


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // begin of default ui settings



     QList<QComboBox*> comboBoxes  = {ui->comboBox, ui->comboBox_2,ui->comboBox_3, ui->comboBox_4, ui->comboBox_5, ui->comboBox_6, ui->comboBox_7};


    // geting card list
    Deck currentDeck;
    QStringList cardsNames;
    for(Card card: currentDeck.deckCompound){
        cardsNames.append(card.getCardValue() + card.getCardSuit());
    }

    // setting information about cards in comboboxes
    for(QComboBox* box : comboBoxes){
        box->addItems(cardsNames);
        box->setCurrentIndex(-1);
    }



    // end of ui settings



    QObject::connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleButtonClicked);





}

Widget::~Widget()
{
    delete ui;
}
