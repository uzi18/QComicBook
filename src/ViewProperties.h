/*
 * This file is a part of QComicBook.
 *
 * Copyright (C) 2005-2009 Pawel Stolowski <stolowski@gmail.com>
 *
 * QComicBook is free software; you can redestribute it and/or modify it
 * under terms of GNU General Public License by Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY. See GPL for more details.
 */

#ifndef __VIEW_PROPERTIES_H
#define __VIEW_PROPERTIES_H

#include <QObject>
#include <QMatrix>
#include <QColor>

namespace QComicBook
{
    enum Size { Original, FitWidth, FitHeight, WholePage, BestFit };
    enum Rotation { None, Left, Right };

    class ViewProperties: public QObject
    {
    Q_OBJECT

    signals:
        void changed();

    public:
        ViewProperties();
        ViewProperties(const ViewProperties &props);

        void setFromSettings();
        int angle() const;
        void setAngle(Rotation r, bool notify=true);
        Size size() const;
        void setSize(Size s);
        bool pageNumbers() const;
        void setPageNumbers(bool f);
        QColor background() const;
        void setBackground(const QColor &c);
        bool continuousScrolling() const;
        void setTwoPagesMode(bool f);
        bool twoPagesMode() const;
        void setMangaMode(bool f);
        bool mangaMode() const;

    private:
        unsigned char m_angle; //rotation angle, 0..3, multipled by 90
        Size m_size;
        QMatrix m_rmatrix;  //rotation matrix
        QColor m_background; //background color
        bool m_pageNumbers;  //if page numbers should be embedded
        bool m_twoPagesMode;
        bool m_mangaMode;
        bool m_contScroll;
    };
}

#endif
