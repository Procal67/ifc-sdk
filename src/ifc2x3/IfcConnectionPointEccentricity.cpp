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

#include "ifc2x3/IfcConnectionPointEccentricity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionPointGeometry.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConnectionPointEccentricity::IfcConnectionPointEccentricity(Step::Id id, Step::SPFData *args) : IfcConnectionPointGeometry(id, args) {
    m_eccentricityInX = Step::getUnset(m_eccentricityInX);
    m_eccentricityInY = Step::getUnset(m_eccentricityInY);
    m_eccentricityInZ = Step::getUnset(m_eccentricityInZ);
}

IfcConnectionPointEccentricity::~IfcConnectionPointEccentricity() {
}

bool IfcConnectionPointEccentricity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionPointEccentricity(this);
}

const std::string &IfcConnectionPointEccentricity::type() const {
    return IfcConnectionPointEccentricity::s_type.getName();
}

const Step::ClassType &IfcConnectionPointEccentricity::getClassType() {
    return IfcConnectionPointEccentricity::s_type;
}

const Step::ClassType &IfcConnectionPointEccentricity::getType() const {
    return IfcConnectionPointEccentricity::s_type;
}

bool IfcConnectionPointEccentricity::isOfType(const Step::ClassType &t) const {
    return IfcConnectionPointEccentricity::s_type == t ? true : IfcConnectionPointGeometry::isOfType(t);
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInX() {
    if (Step::BaseObject::inited()) {
        return m_eccentricityInX;
    }
    else {
        return Step::getUnset(m_eccentricityInX);
    }
}

const IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInX() const {
    IfcConnectionPointEccentricity * deConstObject = const_cast< IfcConnectionPointEccentricity * > (this);
    return deConstObject->getEccentricityInX();
}

void IfcConnectionPointEccentricity::setEccentricityInX(IfcLengthMeasure value) {
    m_eccentricityInX = value;
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInY() {
    if (Step::BaseObject::inited()) {
        return m_eccentricityInY;
    }
    else {
        return Step::getUnset(m_eccentricityInY);
    }
}

const IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInY() const {
    IfcConnectionPointEccentricity * deConstObject = const_cast< IfcConnectionPointEccentricity * > (this);
    return deConstObject->getEccentricityInY();
}

void IfcConnectionPointEccentricity::setEccentricityInY(IfcLengthMeasure value) {
    m_eccentricityInY = value;
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInZ() {
    if (Step::BaseObject::inited()) {
        return m_eccentricityInZ;
    }
    else {
        return Step::getUnset(m_eccentricityInZ);
    }
}

const IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInZ() const {
    IfcConnectionPointEccentricity * deConstObject = const_cast< IfcConnectionPointEccentricity * > (this);
    return deConstObject->getEccentricityInZ();
}

void IfcConnectionPointEccentricity::setEccentricityInZ(IfcLengthMeasure value) {
    m_eccentricityInZ = value;
}

bool IfcConnectionPointEccentricity::init() {
    bool status = IfcConnectionPointGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_eccentricityInX = Step::getUnset(m_eccentricityInX);
    }
    else {
        m_eccentricityInX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_eccentricityInY = Step::getUnset(m_eccentricityInY);
    }
    else {
        m_eccentricityInY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_eccentricityInZ = Step::getUnset(m_eccentricityInZ);
    }
    else {
        m_eccentricityInZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcConnectionPointEccentricity::copy(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop) {
    IfcConnectionPointGeometry::copy(obj, copyop);
    setEccentricityInX(obj.m_eccentricityInX);
    setEccentricityInY(obj.m_eccentricityInY);
    setEccentricityInZ(obj.m_eccentricityInZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionPointEccentricity::s_type("IfcConnectionPointEccentricity");
