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

#include "ifc2x3/IfcBoundaryEdgeCondition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBoundaryEdgeCondition::IfcBoundaryEdgeCondition(Step::Id id, Step::SPFData *args) : IfcBoundaryCondition(id, args) {
    m_linearStiffnessByLengthX = Step::getUnset(m_linearStiffnessByLengthX);
    m_linearStiffnessByLengthY = Step::getUnset(m_linearStiffnessByLengthY);
    m_linearStiffnessByLengthZ = Step::getUnset(m_linearStiffnessByLengthZ);
    m_rotationalStiffnessByLengthX = Step::getUnset(m_rotationalStiffnessByLengthX);
    m_rotationalStiffnessByLengthY = Step::getUnset(m_rotationalStiffnessByLengthY);
    m_rotationalStiffnessByLengthZ = Step::getUnset(m_rotationalStiffnessByLengthZ);
}

IfcBoundaryEdgeCondition::~IfcBoundaryEdgeCondition() {
}

bool IfcBoundaryEdgeCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryEdgeCondition(this);
}

const std::string &IfcBoundaryEdgeCondition::type() const {
    return IfcBoundaryEdgeCondition::s_type.getName();
}

const Step::ClassType &IfcBoundaryEdgeCondition::getClassType() {
    return IfcBoundaryEdgeCondition::s_type;
}

const Step::ClassType &IfcBoundaryEdgeCondition::getType() const {
    return IfcBoundaryEdgeCondition::s_type;
}

bool IfcBoundaryEdgeCondition::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryEdgeCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthX;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthX);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthX = value;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthY;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthY);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthY = value;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthZ;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthZ);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthZ = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthX;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthX);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthX = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthY;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthY);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthY = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthZ;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthZ);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthZ = value;
}

bool IfcBoundaryEdgeCondition::init() {
    bool status = IfcBoundaryCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthX = Step::getUnset(m_linearStiffnessByLengthX);
    }
    else {
        m_linearStiffnessByLengthX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthY = Step::getUnset(m_linearStiffnessByLengthY);
    }
    else {
        m_linearStiffnessByLengthY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthZ = Step::getUnset(m_linearStiffnessByLengthZ);
    }
    else {
        m_linearStiffnessByLengthZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthX = Step::getUnset(m_rotationalStiffnessByLengthX);
    }
    else {
        m_rotationalStiffnessByLengthX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthY = Step::getUnset(m_rotationalStiffnessByLengthY);
    }
    else {
        m_rotationalStiffnessByLengthY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthZ = Step::getUnset(m_rotationalStiffnessByLengthZ);
    }
    else {
        m_rotationalStiffnessByLengthZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryEdgeCondition::copy(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop) {
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByLengthX(obj.m_linearStiffnessByLengthX);
    setLinearStiffnessByLengthY(obj.m_linearStiffnessByLengthY);
    setLinearStiffnessByLengthZ(obj.m_linearStiffnessByLengthZ);
    setRotationalStiffnessByLengthX(obj.m_rotationalStiffnessByLengthX);
    setRotationalStiffnessByLengthY(obj.m_rotationalStiffnessByLengthY);
    setRotationalStiffnessByLengthZ(obj.m_rotationalStiffnessByLengthZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryEdgeCondition::s_type("IfcBoundaryEdgeCondition");
