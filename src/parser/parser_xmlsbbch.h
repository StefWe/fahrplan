/****************************************************************************
**
**  This file is a part of Fahrplan.
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 2 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License along
**  with this program.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#ifndef PARSER_XMLSBBCH_H
#define PARSER_XMLSBBCH_H

#include "parser_hafasxml.h"

class ParserXmlSbbCh : public ParserHafasXml
{
    Q_OBJECT

public:
    explicit ParserXmlSbbCh(QObject *parent = 0);
    static QString getName() { return QString("%1 (sbb.ch)").arg(tr("Switzerland")); }
    virtual QString name() { return getName(); }
    virtual QString shortName() { return "sbb.ch"; }

protected:
    void parseStationsByName(QNetworkReply *networkReply);
    QStringList getTrainRestrictions();
    QString getTrainRestrictionsCodes(int trainrestrictions);
};

#endif // PARSER_XMLSBBCH_H
