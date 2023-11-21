//
// Created by dracul on 11/21/23.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QApplication>
#include <qwidget.h>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QListWidget>

class MainWindow  : public  QWidget {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);



private:

    QLineEdit *m_line_edit;
    QPushButton *m_create_btn;
    QPushButton *m_remove_btn;
    QPushButton *m_remove_all_btn;
    QVBoxLayout *m_qvbox;
    QHBoxLayout *m_qhbox1;
    QHBoxLayout *m_qhbox2;
    QListWidget *m_list_widget;

public slots:

    void create_btn()const;
    void remove_btn()const;
    void remove_all_btn()const;
    void enter_lines() const;



};



#endif //MAINWINDOW_H
