/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcTable.h"


#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTableRow.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Inverted_IfcTable_Rows_type::Inverted_IfcTable_Rows_type() {
}

void Inverted_IfcTable_Rows_type::setOwner(IfcTable *owner) {
    mOwner = owner;
}

void Inverted_IfcTable_Rows_type::push_back(const Step::RefPtr< IfcTableRow > &value) throw(std::out_of_range) {
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    List_IfcTableRow_1_n::push_back(value);
    inverse->m_ofTable = mOwner;
}

Inverted_IfcTable_Rows_type::iterator Inverted_IfcTable_Rows_type::erase(const Step::RefPtr< IfcTableRow > &value) {
    IfcTableRow *inverse = const_cast< IfcTableRow * > (value.get());
    inverse->m_ofTable = NULL;
    return List_IfcTableRow_1_n::erase(value);
}

IfcTable::IfcTable(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_rows.setUnset(true);
    m_rows.setOwner(this);
}

IfcTable::~IfcTable() {
}

bool IfcTable::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTable(this);
}

const std::string &IfcTable::type() const {
    return IfcTable::s_type.getName();
}

const Step::ClassType &IfcTable::getClassType() {
    return IfcTable::s_type;
}

const Step::ClassType &IfcTable::getType() const {
    return IfcTable::s_type;
}

bool IfcTable::isOfType(const Step::ClassType &t) const {
    return IfcTable::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::String IfcTable::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const Step::String IfcTable::getName() const {
    IfcTable * deConstObject = const_cast< IfcTable * > (this);
    return deConstObject->getName();
}

void IfcTable::setName(const Step::String &value) {
    m_name = value;
}

List_IfcTableRow_1_n &IfcTable::getRows() {
    if (Step::BaseObject::inited()) {
        return m_rows;
    }
    else {
        m_rows.setUnset(true);
        return m_rows;
    }
}

const List_IfcTableRow_1_n &IfcTable::getRows() const {
    IfcTable * deConstObject = const_cast< IfcTable * > (this);
    return deConstObject->getRows();
}

bool IfcTable::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rows.setUnset(true);
    }
    else {
        m_rows.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcTableRow > attr2;
                attr2 = static_cast< IfcTableRow * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_rows.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTable::copy(const IfcTable &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcTableRow >, 1 >::const_iterator it_m_rows;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    for (it_m_rows = obj.m_rows.begin(); it_m_rows != obj.m_rows.end(); ++it_m_rows) {
        Step::RefPtr< IfcTableRow > copyTarget = (IfcTableRow *) (copyop((*it_m_rows).get()));
        m_rows.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTable::s_type("IfcTable");
