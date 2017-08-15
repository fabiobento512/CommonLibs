#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDropEvent>
#include <QSplitter>

/***
 * Custom Tree Widget - Same as QTreeWidget but allows to reorder the QTableWidgets using dragging.
 * All code credit go to "Igor" from stackoverflow:
 * http://stackoverflow.com/a/21285323
 * */

class CustomTreeWidget : public QTreeWidget
{
public:
    CustomTreeWidget(QWidget* parent);
private:
    void dropEvent(QDropEvent * event);
};

#endif // TREEVIEW_H
