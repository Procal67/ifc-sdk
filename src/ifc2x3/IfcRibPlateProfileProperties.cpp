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

#include "ifc2x3/IfcRibPlateProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProfileProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRibPlateProfileProperties::IfcRibPlateProfileProperties(Step::Id id, Step::SPFData *args) : IfcProfileProperties(id, args) {
    m_thickness = Step::getUnset(m_thickness);
    m_ribHeight = Step::getUnset(m_ribHeight);
    m_ribWidth = Step::getUnset(m_ribWidth);
    m_ribSpacing = Step::getUnset(m_ribSpacing);
    m_direction = IfcRibPlateDirectionEnum_UNSET;
}

IfcRibPlateProfileProperties::~IfcRibPlateProfileProperties() {
}

bool IfcRibPlateProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRibPlateProfileProperties(this);
}

const std::string &IfcRibPlateProfileProperties::type() const {
    return IfcRibPlateProfileProperties::s_type.getName();
}

const Step::ClassType &IfcRibPlateProfileProperties::getClassType() {
    return IfcRibPlateProfileProperties::s_type;
}

const Step::ClassType &IfcRibPlateProfileProperties::getType() const {
    return IfcRibPlateProfileProperties::s_type;
}

bool IfcRibPlateProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcRibPlateProfileProperties::s_type == t ? true : IfcProfileProperties::isOfType(t);
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getThickness() {
    if (Step::BaseObject::inited()) {
        return m_thickness;
    }
    else {
        return Step::getUnset(m_thickness);
    }
}

const IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getThickness() const {
    IfcRibPlateProfileProperties * deConstObject = const_cast< IfcRibPlateProfileProperties * > (this);
    return deConstObject->getThickness();
}

void IfcRibPlateProfileProperties::setThickness(IfcPositiveLengthMeasure value) {
    m_thickness = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibHeight() {
    if (Step::BaseObject::inited()) {
        return m_ribHeight;
    }
    else {
        return Step::getUnset(m_ribHeight);
    }
}

const IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibHeight() const {
    IfcRibPlateProfileProperties * deConstObject = const_cast< IfcRibPlateProfileProperties * > (this);
    return deConstObject->getRibHeight();
}

void IfcRibPlateProfileProperties::setRibHeight(IfcPositiveLengthMeasure value) {
    m_ribHeight = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibWidth() {
    if (Step::BaseObject::inited()) {
        return m_ribWidth;
    }
    else {
        return Step::getUnset(m_ribWidth);
    }
}

const IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibWidth() const {
    IfcRibPlateProfileProperties * deConstObject = const_cast< IfcRibPlateProfileProperties * > (this);
    return deConstObject->getRibWidth();
}

void IfcRibPlateProfileProperties::setRibWidth(IfcPositiveLengthMeasure value) {
    m_ribWidth = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibSpacing() {
    if (Step::BaseObject::inited()) {
        return m_ribSpacing;
    }
    else {
        return Step::getUnset(m_ribSpacing);
    }
}

const IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibSpacing() const {
    IfcRibPlateProfileProperties * deConstObject = const_cast< IfcRibPlateProfileProperties * > (this);
    return deConstObject->getRibSpacing();
}

void IfcRibPlateProfileProperties::setRibSpacing(IfcPositiveLengthMeasure value) {
    m_ribSpacing = value;
}

IfcRibPlateDirectionEnum IfcRibPlateProfileProperties::getDirection() {
    if (Step::BaseObject::inited()) {
        return m_direction;
    }
    else {
        return IfcRibPlateDirectionEnum_UNSET;
    }
}

const IfcRibPlateDirectionEnum IfcRibPlateProfileProperties::getDirection() const {
    IfcRibPlateProfileProperties * deConstObject = const_cast< IfcRibPlateProfileProperties * > (this);
    return deConstObject->getDirection();
}

void IfcRibPlateProfileProperties::setDirection(IfcRibPlateDirectionEnum value) {
    m_direction = value;
}

bool IfcRibPlateProfileProperties::init() {
    bool status = IfcProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thickness = Step::getUnset(m_thickness);
    }
    else {
        m_thickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ribHeight = Step::getUnset(m_ribHeight);
    }
    else {
        m_ribHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ribWidth = Step::getUnset(m_ribWidth);
    }
    else {
        m_ribWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ribSpacing = Step::getUnset(m_ribSpacing);
    }
    else {
        m_ribSpacing = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_direction = IfcRibPlateDirectionEnum_UNSET;
    }
    else {
        if (arg == ".DIRECTION_X.") {
            m_direction = IfcRibPlateDirectionEnum_DIRECTION_X;
        }
        else if (arg == ".DIRECTION_Y.") {
            m_direction = IfcRibPlateDirectionEnum_DIRECTION_Y;
        }
    }
    return true;
}

void IfcRibPlateProfileProperties::copy(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop) {
    IfcProfileProperties::copy(obj, copyop);
    setThickness(obj.m_thickness);
    setRibHeight(obj.m_ribHeight);
    setRibWidth(obj.m_ribWidth);
    setRibSpacing(obj.m_ribSpacing);
    setDirection(obj.m_direction);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRibPlateProfileProperties::s_type("IfcRibPlateProfileProperties");
