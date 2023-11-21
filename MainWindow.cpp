//
// Created by dracul on 11/21/23.
//

#include "MainWindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget*) {
    this->setWindowTitle("Todo App");
    m_create_btn = new QPushButton("Create");
    m_remove_btn = new QPushButton("Remove");
    m_remove_all_btn = new QPushButton("Remove all");
    m_line_edit = new QLineEdit();

    m_list_widget = new QListWidget();

    m_qhbox1 = new QHBoxLayout();
    m_qhbox1->addWidget(m_line_edit);
    m_qhbox1->addWidget(m_create_btn);

    m_qhbox2 = new QHBoxLayout();
    m_qhbox2->addWidget(m_remove_all_btn);
    m_qhbox2->addWidget(m_remove_btn);


    m_qvbox = new QVBoxLayout();
    m_qvbox->addLayout(m_qhbox1);
    m_qvbox->addWidget(m_list_widget);
    m_qvbox->addLayout(m_qhbox2);

    setLayout(m_qvbox);
    connect(m_create_btn, SIGNAL(clicked()), this, SLOT(create_btn()));
    connect(m_remove_btn, SIGNAL(clicked()), this, SLOT(remove_btn()));
    connect(m_remove_all_btn, SIGNAL(clicked()), this, SLOT(remove_all_btn()));
    connect(m_line_edit, SIGNAL(returnPressed()), this, SLOT(enter_lines()));
}

void MainWindow::create_btn() const {
    if (!m_line_edit->text().isEmpty()) {
        m_list_widget->addItem(m_line_edit->text());
        m_line_edit->clear();
    }
}

void MainWindow::remove_btn() const {
    delete m_list_widget->takeItem(m_list_widget->currentRow());
    m_list_widget->clearSelection();
}

void MainWindow::remove_all_btn() const {
    m_list_widget->clear();
}

void MainWindow::enter_lines() const {
    if (!m_line_edit->text().isEmpty()) {
        m_list_widget->addItem(m_line_edit->text());
        m_line_edit->clear();
    }
}



