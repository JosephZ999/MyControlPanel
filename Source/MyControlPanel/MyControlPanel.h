#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyControlPanel.h"

class MyControlPanel : public QMainWindow
{
	Q_OBJECT

public:
	MyControlPanel(QWidget* parent = nullptr);
	~MyControlPanel();

private:
	Ui::MyControlPanelClass m_ui;
};
