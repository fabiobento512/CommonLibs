/**
 * Copyright (C) 2017
 *
 * This library is distributed under the MIT License. See notice at the end
 * of this file.
 *
 * All code credit go to "Igor" from stackoverflow:
 * http://stackoverflow.com/a/21285323
 */

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

/**
 * Copyright (c) 2017
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
