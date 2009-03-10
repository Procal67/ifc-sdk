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

#include "ifc2x3/IfcStructuralLoadPlanarForce.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoadStatic.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadPlanarForce::IfcStructuralLoadPlanarForce(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_planarForceX = Step::getUnset(m_planarForceX);
    m_planarForceY = Step::getUnset(m_planarForceY);
    m_planarForceZ = Step::getUnset(m_planarForceZ);
}

IfcStructuralLoadPlanarForce::~IfcStructuralLoadPlanarForce() {
}

bool IfcStructuralLoadPlanarForce::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadPlanarForce(this);
}

const std::string &IfcStructuralLoadPlanarForce::type() const {
    return IfcStructuralLoadPlanarForce::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadPlanarForce::getClassType() {
    return IfcStructuralLoadPlanarForce::s_type;
}

const Step::ClassType &IfcStructuralLoadPlanarForce::getType() const {
    return IfcStructuralLoadPlanarForce::s_type;
}

bool IfcStructuralLoadPlanarForce::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadPlanarForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceX() {
    if (Step::BaseObject::inited()) {
        return m_planarForceX;
    }
    else {
        return Step::getUnset(m_planarForceX);
    }
}

const IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceX() const {
    IfcStructuralLoadPlanarForce * deConstObject = const_cast< IfcStructuralLoadPlanarForce * > (this);
    return deConstObject->getPlanarForceX();
}

void IfcStructuralLoadPlanarForce::setPlanarForceX(IfcPlanarForceMeasure value) {
    m_planarForceX = value;
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceY() {
    if (Step::BaseObject::inited()) {
        return m_planarForceY;
    }
    else {
        return Step::getUnset(m_planarForceY);
    }
}

const IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceY() const {
    IfcStructuralLoadPlanarForce * deConstObject = const_cast< IfcStructuralLoadPlanarForce * > (this);
    return deConstObject->getPlanarForceY();
}

void IfcStructuralLoadPlanarForce::setPlanarForceY(IfcPlanarForceMeasure value) {
    m_planarForceY = value;
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceZ() {
    if (Step::BaseObject::inited()) {
        return m_planarForceZ;
    }
    else {
        return Step::getUnset(m_planarForceZ);
    }
}

const IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceZ() const {
    IfcStructuralLoadPlanarForce * deConstObject = const_cast< IfcStructuralLoadPlanarForce * > (this);
    return deConstObject->getPlanarForceZ();
}

void IfcStructuralLoadPlanarForce::setPlanarForceZ(IfcPlanarForceMeasure value) {
    m_planarForceZ = value;
}

bool IfcStructuralLoadPlanarForce::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_planarForceX = Step::getUnset(m_planarForceX);
    }
    else {
        m_planarForceX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_planarForceY = Step::getUnset(m_planarForceY);
    }
    else {
        m_planarForceY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_planarForceZ = Step::getUnset(m_planarForceZ);
    }
    else {
        m_planarForceZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadPlanarForce::copy(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setPlanarForceX(obj.m_planarForceX);
    setPlanarForceY(obj.m_planarForceY);
    setPlanarForceZ(obj.m_planarForceZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadPlanarForce::s_type("IfcStructuralLoadPlanarForce");
