#ifndef ADDAUTOTYPEDIALOG_H
#define ADDAUTOTYPEDIALOG_H

#include <QDialog>
#include <QVariant>

namespace Ui {
class AddAutoTypeDialog;
}

class QSqlTableModel;

class AddAutoTypeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddAutoTypeDialog(QWidget *parent = 0);
    ~AddAutoTypeDialog();

    QVariant processID() const;
    QVariant moduleName() const;
    QVariant title() const;
    int typeID() const;
    int priority() const;

private:
    Ui::AddAutoTypeDialog *ui;
    QSqlTableModel* model_;
};

#endif // ADDAUTOTYPEDIALOG_H
