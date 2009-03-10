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

#include "ifc2x3/IfcPointOnSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPointOnSurface::IfcPointOnSurface(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_basisSurface = NULL;
    m_pointParameterU = Step::getUnset(m_pointParameterU);
    m_pointParameterV = Step::getUnset(m_pointParameterV);
}

IfcPointOnSurface::~IfcPointOnSurface() {
}

bool IfcPointOnSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPointOnSurface(this);
}

const std::string &IfcPointOnSurface::type() const {
    return IfcPointOnSurface::s_type.getName();
}

const Step::ClassType &IfcPointOnSurface::getClassType() {
    return IfcPointOnSurface::s_type;
}

const Step::ClassType &IfcPointOnSurface::getType() const {
    return IfcPointOnSurface::s_type;
}

bool IfcPointOnSurface::isOfType(const Step::ClassType &t) const {
    return IfcPointOnSurface::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcSurface *IfcPointOnSurface::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcPointOnSurface::getBasisSurface() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getBasisSurface();
}

void IfcPointOnSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
    m_basisSurface = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterU() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterU;
    }
    else {
        return Step::getUnset(m_pointParameterU);
    }
}

const IfcParameterValue IfcPointOnSurface::getPointParameterU() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getPointParameterU();
}

void IfcPointOnSurface::setPointParameterU(IfcParameterValue value) {
    m_pointParameterU = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterV() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterV;
    }
    else {
        return Step::getUnset(m_pointParameterV);
    }
}

const IfcParameterValue IfcPointOnSurface::getPointParameterV() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getPointParameterV();
}

void IfcPointOnSurface::setPointParameterV(IfcParameterValue value) {
    m_pointParameterV = value;
}

bool IfcPointOnSurface::init() {
    bool status = IfcPoint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisSurface = NULL;
    }
    else {
        m_basisSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterU = Step::getUnset(m_pointParameterU);
    }
    else {
        m_pointParameterU = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterV = Step::getUnset(m_pointParameterV);
    }
    else {
        m_pointParameterV = Step::spfToReal(arg);
    }
    return true;
}

void IfcPointOnSurface::copy(const IfcPointOnSurface &obj, const CopyOp &copyop) {
    IfcPoint::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_basisSurface.get()));
    setPointParameterU(obj.m_pointParameterU);
    setPointParameterV(obj.m_pointParameterV);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnSurface::s_type("IfcPointOnSurface");
