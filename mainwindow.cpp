#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QCoreApplication>
#include <QFileDialog>
#include <sstream>
#include <ctime>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include "heap.h"
#include "heapnode.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->Information->setTabText(0, "Summary");
    ui->Information->setTabText(1, "A");
    ui->Information->setTabText(2, "B");
    ui->Information->setTabText(3, "C");
    ui->Information->setTabText(4, "D");
    ui->Information->setTabText(5, "E");
    ui->Information->setTabText(6, "F");
    ui->Information->setTabText(7, "G");
    ui->Information->setTabText(8, "H");
    ui->Information->setTabText(9, "I");
    ui->Information->setTabText(10, "J");
    ui->Information->setTabText(11, "K");
    ui->Information->setTabText(12, "L");
    ui->Information->setTabText(13, "M");
    ui->Information->setTabText(14, "N");
    ui->Information->setTabText(15, "O");
    ui->Information->setTabText(16, "P");
    ui->Information->setTabText(17, "Q");
    ui->Information->setTabText(18, "R");
    ui->Information->setTabText(19, "S");
    ui->Information->setTabText(20, "T");
    ui->Information->setTabText(21, "U");
    ui->Information->setTabText(22, "V");
    ui->Information->setTabText(23, "W");
    ui->Information->setTabText(24, "X");
    ui->Information->setTabText(25, "Y");
    ui->Information->setTabText(26, "Z");

    connect(ui->Open,SIGNAL(pressed()),this,SLOT(openFile()));
    connect(ui->Run,SIGNAL(pressed()),this,SLOT(runSearch()));
    connect(ui->Save,SIGNAL(pressed()),this,SLOT(saveFile()));
    connect(ui->Clear, SIGNAL(pressed()),this,SLOT(clearFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearFile()
{
    file = "";
    ui->textBrowser_2->setText("");
    ui->textBrowser_3->setText("");
    ui->textBrowser_4->setText("");
    ui->textBrowser_5->setText("");
    ui->textBrowser_6->setText("");
    ui->textBrowser_7->setText("");
    ui->textBrowser_8->setText("");
    ui->textBrowser_9->setText("");
    ui->textBrowser_10->setText("");
    ui->textBrowser_11->setText("");
    ui->textBrowser_12->setText("");
    ui->textBrowser_13->setText("");
    ui->textBrowser_14->setText("");
    ui->textBrowser_15->setText("");
    ui->textBrowser_16->setText("");
    ui->textBrowser_17->setText("");
    ui->textBrowser_18->setText("");
    ui->textBrowser_19->setText("");
    ui->textBrowser_20->setText("");
    ui->textBrowser_21->setText("");
    ui->textBrowser_22->setText("");
    ui->textBrowser_23->setText("");
    ui->textBrowser_24->setText("");
    ui->textBrowser_25->setText("");
    ui->textBrowser_26->setText("");
    ui->textBrowser_27->setText("");
    ui->textBrowser_28->setText("");
}

void MainWindow::openFile()
{
    file = QFileDialog::getOpenFileName(this,tr("Open file"), "", tr("*.txt"));
}

void MainWindow::runSearch()
{
    int lineNumber = 1, paragraphNumber = 1, totalVowels = 0, sentenceNumber = 1, total = 0, doubleHyp = 0;
    char junk;
    ifstream input(file.toStdString().c_str());
    ostringstream os;
    size_t vowelPosition = 0;
    string word, doubleWord;
    heapNode* tempNode;
    vector<heap<heapNode> > words(26);
    vector<pair<int, string> > popularWords;
    QString summary;
    time_t start = clock(), end;

    while(input>>noskipws>>junk)
    {
        if((isalpha(junk)) && input.putback(junk) && input>>word)
        {
            if(word.find_first_of(".!?") != std::string::npos && sentenceNumber++)
                word.erase(word.find_first_of(".!?"));
            while(word.find_first_of(":;,[])*(") != std::string::npos)
                word.erase(word.find_first_of(",*[]:;()"),1);
            while(word.find_first_of('"') != std::string::npos)
                word.erase(word.find_first_of('"'),1);
            if(word.find_first_of('-') != std::string::npos)
                if(word[word.find_first_of('-')+1] == '-' )
                {
                    doubleHyp = word.find_first_of('-');
                    while(word.find_first_of('-') != std::string::npos)
                    {
                        word.erase(word.find_first_of('-'),1);
                    }
                    if(doubleHyp < word.size())
                    {
                        doubleWord = word.substr(doubleHyp);
                        word.erase(doubleHyp);
                        if(isalpha(doubleWord[0]))
                        {
                            doubleWord[0] = toupper(doubleWord[0]);
                            tempNode = new heapNode(doubleWord,lineNumber,paragraphNumber);
                            words[doubleWord[0]-65].insert(tempNode);
                        }
                    }
                }
            vowelPosition = word.find_first_of("aeiou");
            while(vowelPosition != std::string::npos)
            {
                totalVowels++;
                vowelPosition = word.find_first_of("aeiou",vowelPosition+1);
            }
            word[0] = toupper(word[0]);
            tempNode = new heapNode(word,lineNumber,paragraphNumber);
            words[word[0]-65].insert(tempNode);
        }
        (junk == '\n' && lineNumber++ && input.peek() == '\n' && paragraphNumber++);
    }
    end = clock();
    os<<"Insertion Speed = "<<double(end-start)/CLOCKS_PER_SEC<<endl;

    for(unsigned int i = 0; i < words.size(); i++)
        total+=words[i].size();
    os<<"Total words: "<<total<<endl;
    for(unsigned int i = 0; i < words.size(); i++)
        os<<char(i+65)<<" has "<<words[i].size()<<endl;
    os<<"Paragraph count = "<<paragraphNumber<<endl
     <<"Reading Level: "<<(((.39 * double(total)/sentenceNumber) + (11.8 * (double(totalVowels) / total))) - 15.59)<<endl<<endl;

    summary = words[0].print(popularWords).c_str(); ui->textBrowser_3->setText(summary);
    summary = words[1].print(popularWords).c_str(); ui->textBrowser_4->setText(summary);
    summary = words[2].print(popularWords).c_str(); ui->textBrowser_5->setText(summary);
    summary = words[3].print(popularWords).c_str(); ui->textBrowser_6->setText(summary);
    summary = words[4].print(popularWords).c_str(); ui->textBrowser_7->setText(summary);
    summary = words[5].print(popularWords).c_str(); ui->textBrowser_8->setText(summary);
    summary = words[6].print(popularWords).c_str(); ui->textBrowser_9->setText(summary);
    summary = words[7].print(popularWords).c_str(); ui->textBrowser_10->setText(summary);
    summary = words[8].print(popularWords).c_str(); ui->textBrowser_11->setText(summary);
    summary = words[9].print(popularWords).c_str(); ui->textBrowser_12->setText(summary);
    summary = words[10].print(popularWords).c_str(); ui->textBrowser_13->setText(summary);
    summary = words[11].print(popularWords).c_str(); ui->textBrowser_14->setText(summary);
    summary = words[12].print(popularWords).c_str(); ui->textBrowser_15->setText(summary);
    summary = words[13].print(popularWords).c_str(); ui->textBrowser_16->setText(summary);
    summary = words[14].print(popularWords).c_str(); ui->textBrowser_17->setText(summary);
    summary = words[15].print(popularWords).c_str(); ui->textBrowser_18->setText(summary);
    summary = words[16].print(popularWords).c_str(); ui->textBrowser_19->setText(summary);
    summary = words[17].print(popularWords).c_str(); ui->textBrowser_20->setText(summary);
    summary = words[18].print(popularWords).c_str(); ui->textBrowser_21->setText(summary);
    summary = words[19].print(popularWords).c_str(); ui->textBrowser_22->setText(summary);
    summary = words[20].print(popularWords).c_str(); ui->textBrowser_23->setText(summary);
    summary = words[21].print(popularWords).c_str(); ui->textBrowser_24->setText(summary);
    summary = words[22].print(popularWords).c_str(); ui->textBrowser_25->setText(summary);
    summary = words[23].print(popularWords).c_str(); ui->textBrowser_26->setText(summary);
    summary = words[24].print(popularWords).c_str(); ui->textBrowser_27->setText(summary);
    summary = words[25].print(popularWords).c_str(); ui->textBrowser_28->setText(summary);

    for(unsigned int i = 0; i < popularWords.size(); i++)
        os<<popularWords[i].second<<" "<<popularWords[i].first<<endl;
    end = clock();
    os<<"Speed overall = "<<double(end-start)/CLOCKS_PER_SEC<<endl;

    summary = os.str().c_str();

    ui->textBrowser_2->setText(summary);

}

void MainWindow::saveFile()
{
    outputfile = QFileDialog::getSaveFileName(this, tr("Save file"), "", tr("*.txt"));
    outputfile+=".txt";
    QString line;
    QFile file(outputfile);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    QTextStream out(&file);

    line = ui->textBrowser_2->toPlainText(); out << line;
    line = ui->textBrowser_3->toPlainText(); out << line;
    line = ui->textBrowser_4->toPlainText(); out << line;
    line = ui->textBrowser_5->toPlainText(); out << line;
    line = ui->textBrowser_6->toPlainText(); out << line;
    line = ui->textBrowser_7->toPlainText(); out << line;
    line = ui->textBrowser_8->toPlainText(); out << line;
    line = ui->textBrowser_9->toPlainText(); out << line;
    line = ui->textBrowser_10->toPlainText(); out << line;
    line = ui->textBrowser_11->toPlainText(); out << line;
    line = ui->textBrowser_12->toPlainText(); out << line;
    line = ui->textBrowser_13->toPlainText(); out << line;
    line = ui->textBrowser_14->toPlainText(); out << line;
    line = ui->textBrowser_15->toPlainText(); out << line;
    line = ui->textBrowser_16->toPlainText(); out << line;
    line = ui->textBrowser_17->toPlainText(); out << line;
    line = ui->textBrowser_18->toPlainText(); out << line;
    line = ui->textBrowser_19->toPlainText(); out << line;
    line = ui->textBrowser_20->toPlainText(); out << line;
    line = ui->textBrowser_21->toPlainText(); out << line;
    line = ui->textBrowser_22->toPlainText(); out << line;
    line = ui->textBrowser_23->toPlainText(); out << line;
    line = ui->textBrowser_24->toPlainText(); out << line;
    line = ui->textBrowser_25->toPlainText(); out << line;
    line = ui->textBrowser_26->toPlainText(); out << line;
    line = ui->textBrowser_27->toPlainText(); out << line;
    line = ui->textBrowser_28->toPlainText(); out << line;
}
