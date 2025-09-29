#ifndef ODANPUSHBUTTON_H
#define ODANPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class OdanPushButton : public QPushButton
{
public:
    explicit OdanPushButton(QWidget * parent = Q_NULLPTR);
    explicit OdanPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // ODANPUSHBUTTON_H
