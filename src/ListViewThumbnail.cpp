/*
 * This file is a part of QComicBook.
 *
 * Copyright (C) 2005-2006 Pawel Stolowski <pawel.stolowski@wp.pl>
 *
 * QComicBook is free software; you can redestribute it and/or modify it
 * under terms of GNU General Public License by Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY. See GPL for more details.
 */

#include "listviewthumbnail.h"

using namespace QComicBook;

ListViewThumbnail::ListViewThumbnail(QListWidget *parent, QListWidgetItem *after, int page) : ThumbnailItem(page) //: QListWidgetItem(parent, after, QString::number(page+1), QCheckListItem::CheckBox), ThumbnailItem(page)
{
}

ListViewThumbnail::~ListViewThumbnail()
{
}
