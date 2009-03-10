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

#include "ifc2x3/IfcCurveOrEdgeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcEdgeCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::~IfcCurveOrEdgeCurve() {
    deleteUnion();
}

bool IfcCurveOrEdgeCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveOrEdgeCurve(this);
}

bool IfcCurveOrEdgeCurve::init() {
    return false;
}

const std::string &IfcCurveOrEdgeCurve::type() const {
    return IfcCurveOrEdgeCurve::s_type.getName();
}

const Step::ClassType &IfcCurveOrEdgeCurve::getClassType() {
    return IfcCurveOrEdgeCurve::s_type;
}

const Step::ClassType &IfcCurveOrEdgeCurve::getType() const {
    return IfcCurveOrEdgeCurve::s_type;
}

bool IfcCurveOrEdgeCurve::isOfType(const Step::ClassType &t) const {
    return IfcCurveOrEdgeCurve::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCurveOrEdgeCurve::copy(const IfcCurveOrEdgeCurve &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCBOUNDEDCURVE:
        setIfcBoundedCurve((IfcBoundedCurve *) (copyop(obj.m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve)));
        break;
    case IFCEDGECURVE:
        setIfcEdgeCurve((IfcEdgeCurve *) (copyop(obj.m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve)));
        break;
        }
}

std::string IfcCurveOrEdgeCurve::currentTypeName() const {
    switch(m_type) {
    case IFCBOUNDEDCURVE:
        return "IfcBoundedCurve";
        break;
    case IFCEDGECURVE:
        return "IfcEdgeCurve";
        break;
    default:
        return "UNSET";
    }
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve_select IfcCurveOrEdgeCurve::currentType() const {
    return m_type;
}

void IfcCurveOrEdgeCurve::deleteUnion() {
    switch(m_type) {
    case IFCBOUNDEDCURVE:
        m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve->unref();
        break;
    case IFCEDGECURVE:
        m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve->unref();
        break;
        }
    m_type = UNSET;
}

IfcBoundedCurve *IfcCurveOrEdgeCurve::getIfcBoundedCurve() const {
    if (m_type == IFCBOUNDEDCURVE) {
        return m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve;
    }
    else {
        return NULL;
    }
}

void IfcCurveOrEdgeCurve::setIfcBoundedCurve(IfcBoundedCurve *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve = value;
    if (value) {
        value->ref();
        m_type = IFCBOUNDEDCURVE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCBOUNDEDCURVE;
}

IfcEdgeCurve *IfcCurveOrEdgeCurve::getIfcEdgeCurve() const {
    if (m_type == IFCEDGECURVE) {
        return m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve;
    }
    else {
        return NULL;
    }
}

void IfcCurveOrEdgeCurve::setIfcEdgeCurve(IfcEdgeCurve *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve = value;
    if (value) {
        value->ref();
        m_type = IFCEDGECURVE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEDGECURVE;
}

void IfcCurveOrEdgeCurve::set(Step::BaseObject *v) {
    if (v->isOfType(IfcBoundedCurve::getClassType())) {
        setIfcBoundedCurve(static_cast< IfcBoundedCurve* > (v));
    }
    else if (v->isOfType(IfcEdgeCurve::getClassType())) {
        setIfcEdgeCurve(static_cast< IfcEdgeCurve* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveOrEdgeCurve::s_type("IfcCurveOrEdgeCurve");
