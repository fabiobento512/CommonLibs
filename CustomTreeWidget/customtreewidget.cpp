#include "customtreewidget.h"

CustomTreeWidget::CustomTreeWidget(QWidget *parent)
    : QTreeWidget(parent)
{
    setSelectionMode(QAbstractItemView::SingleSelection);
    setDragEnabled(true);
    viewport()->setAcceptDrops(true);
    setDropIndicatorShown(true);
    setDragDropMode(QAbstractItemView::InternalMove);
}

void CustomTreeWidget::dropEvent(QDropEvent * event)
{
    QModelIndex droppedIndex = indexAt( event->pos() );

    if( !droppedIndex.isValid() )
        return;

    QTreeWidget::dropEvent(event);

    QTreeWidgetItem *itemMoved = itemAt(event->pos());

    // If the item was dropped in top level item (project), it is moved to the bottom
    if(itemMoved == this->topLevelItem(0)){
        itemMoved = this->topLevelItem(0)->child(this->topLevelItem(0)->childCount()-1);
    }

    // Set the item moved as currentItem
    setCurrentItem(itemMoved);

    // Signal that the item has changed
    itemChanged(itemAt(event->pos()),0);
}
