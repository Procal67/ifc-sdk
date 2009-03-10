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

#include "ifc2x3/IfcIShapeProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcIShapeProfileDef::IfcIShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_overallWidth = Step::getUnset(m_overallWidth);
    m_overallDepth = Step::getUnset(m_overallDepth);
    m_webThickness = Step::getUnset(m_webThickness);
    m_flangeThickness = Step::getUnset(m_flangeThickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
}

IfcIShapeProfileDef::~IfcIShapeProfileDef() {
}

bool IfcIShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcIShapeProfileDef(this);
}

const std::string &IfcIShapeProfileDef::type() const {
    return IfcIShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcIShapeProfileDef::getClassType() {
    return IfcIShapeProfileDef::s_type;
}

const Step::ClassType &IfcIShapeProfileDef::getType() const {
    return IfcIShapeProfileDef::s_type;
}

bool IfcIShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcIShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallWidth() {
    if (Step::BaseObject::inited()) {
        return m_overallWidth;
    }
    else {
        return Step::getUnset(m_overallWidth);
    }
}

const IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallWidth() const {
    IfcIShapeProfileDef * deConstObject = const_cast< IfcIShapeProfileDef * > (this);
    return deConstObject->getOverallWidth();
}

void IfcIShapeProfileDef::setOverallWidth(IfcPositiveLengthMeasure value) {
    m_overallWidth = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallDepth() {
    if (Step::BaseObject::inited()) {
        return m_overallDepth;
    }
    else {
        return Step::getUnset(m_overallDepth);
    }
}

const IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallDepth() const {
    IfcIShapeProfileDef * deConstObject = const_cast< IfcIShapeProfileDef * > (this);
    return deConstObject->getOverallDepth();
}

void IfcIShapeProfileDef::setOverallDepth(IfcPositiveLengthMeasure value) {
    m_overallDepth = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcIShapeProfileDef::getWebThickness() const {
    IfcIShapeProfileDef * deConstObject = const_cast< IfcIShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcIShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

const IfcPositiveLengthMeasure IfcIShapeProfileDef::getFlangeThickness() const {
    IfcIShapeProfileDef * deConstObject = const_cast< IfcIShapeProfileDef * > (this);
    return deConstObject->getFlangeThickness();
}

void IfcIShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

const IfcPositiveLengthMeasure IfcIShapeProfileDef::getFilletRadius() const {
    IfcIShapeProfileDef * deConstObject = const_cast< IfcIShapeProfileDef * > (this);
    return deConstObject->getFilletRadius();
}

void IfcIShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

bool IfcIShapeProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallWidth = Step::getUnset(m_overallWidth);
    }
    else {
        m_overallWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallDepth = Step::getUnset(m_overallDepth);
    }
    else {
        m_overallDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webThickness = Step::getUnset(m_webThickness);
    }
    else {
        m_webThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeThickness = Step::getUnset(m_flangeThickness);
    }
    else {
        m_flangeThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_filletRadius = Step::getUnset(m_filletRadius);
    }
    else {
        m_filletRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcIShapeProfileDef::copy(const IfcIShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallWidth(obj.m_overallWidth);
    setOverallDepth(obj.m_overallDepth);
    setWebThickness(obj.m_webThickness);
    setFlangeThickness(obj.m_flangeThickness);
    setFilletRadius(obj.m_filletRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcIShapeProfileDef::s_type("IfcIShapeProfileDef");
