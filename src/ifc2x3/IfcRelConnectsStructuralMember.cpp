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

#include "ifc2x3/IfcRelConnectsStructuralMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/IfcRelConnects.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include "ifc2x3/IfcStructuralMember.h"
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

IfcRelConnectsStructuralMember::IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingStructuralMember = NULL;
    m_relatedStructuralConnection = NULL;
    m_appliedCondition = NULL;
    m_additionalConditions = NULL;
    m_supportedLength = Step::getUnset(m_supportedLength);
    m_conditionCoordinateSystem = NULL;
}

IfcRelConnectsStructuralMember::~IfcRelConnectsStructuralMember() {
}

bool IfcRelConnectsStructuralMember::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsStructuralMember(this);
}

const std::string &IfcRelConnectsStructuralMember::type() const {
    return IfcRelConnectsStructuralMember::s_type.getName();
}

const Step::ClassType &IfcRelConnectsStructuralMember::getClassType() {
    return IfcRelConnectsStructuralMember::s_type;
}

const Step::ClassType &IfcRelConnectsStructuralMember::getType() const {
    return IfcRelConnectsStructuralMember::s_type;
}

bool IfcRelConnectsStructuralMember::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsStructuralMember::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_relatingStructuralMember.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralMember *IfcRelConnectsStructuralMember::getRelatingStructuralMember() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getRelatingStructuralMember();
}

void IfcRelConnectsStructuralMember::setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
    if (m_relatingStructuralMember.valid()) {
        m_relatingStructuralMember->m_connectedBy.erase(this);
    }
    if (value.valid()) {
        value->m_connectedBy.insert(this);
    }
    m_relatingStructuralMember = value;
}

IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralConnection.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralConnection *IfcRelConnectsStructuralMember::getRelatedStructuralConnection() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getRelatedStructuralConnection();
}

void IfcRelConnectsStructuralMember::setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value) {
    if (m_relatedStructuralConnection.valid()) {
        m_relatedStructuralConnection->m_connectsStructuralMembers.erase(this);
    }
    if (value.valid()) {
        value->m_connectsStructuralMembers.insert(this);
    }
    m_relatedStructuralConnection = value;
}

IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition() {
    if (Step::BaseObject::inited()) {
        return m_appliedCondition.get();
    }
    else {
        return NULL;
    }
}

const IfcBoundaryCondition *IfcRelConnectsStructuralMember::getAppliedCondition() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getAppliedCondition();
}

void IfcRelConnectsStructuralMember::setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value) {
    m_appliedCondition = value;
}

IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions() {
    if (Step::BaseObject::inited()) {
        return m_additionalConditions.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralConnectionCondition *IfcRelConnectsStructuralMember::getAdditionalConditions() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getAdditionalConditions();
}

void IfcRelConnectsStructuralMember::setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value) {
    m_additionalConditions = value;
}

IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength() {
    if (Step::BaseObject::inited()) {
        return m_supportedLength;
    }
    else {
        return Step::getUnset(m_supportedLength);
    }
}

const IfcLengthMeasure IfcRelConnectsStructuralMember::getSupportedLength() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getSupportedLength();
}

void IfcRelConnectsStructuralMember::setSupportedLength(IfcLengthMeasure value) {
    m_supportedLength = value;
}

IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem() {
    if (Step::BaseObject::inited()) {
        return m_conditionCoordinateSystem.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcRelConnectsStructuralMember::getConditionCoordinateSystem() const {
    IfcRelConnectsStructuralMember * deConstObject = const_cast< IfcRelConnectsStructuralMember * > (this);
    return deConstObject->getConditionCoordinateSystem();
}

void IfcRelConnectsStructuralMember::setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_conditionCoordinateSystem = value;
}

bool IfcRelConnectsStructuralMember::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingStructuralMember = NULL;
    }
    else {
        m_relatingStructuralMember = static_cast< IfcStructuralMember * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedStructuralConnection = NULL;
    }
    else {
        m_relatedStructuralConnection = static_cast< IfcStructuralConnection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedCondition = NULL;
    }
    else {
        m_appliedCondition = static_cast< IfcBoundaryCondition * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_additionalConditions = NULL;
    }
    else {
        m_additionalConditions = static_cast< IfcStructuralConnectionCondition * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_supportedLength = Step::getUnset(m_supportedLength);
    }
    else {
        m_supportedLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_conditionCoordinateSystem = NULL;
    }
    else {
        m_conditionCoordinateSystem = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsStructuralMember::copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingStructuralMember((IfcStructuralMember*)copyop(obj.m_relatingStructuralMember.get()));
    setRelatedStructuralConnection((IfcStructuralConnection*)copyop(obj.m_relatedStructuralConnection.get()));
    setAppliedCondition((IfcBoundaryCondition*)copyop(obj.m_appliedCondition.get()));
    setAdditionalConditions((IfcStructuralConnectionCondition*)copyop(obj.m_additionalConditions.get()));
    setSupportedLength(obj.m_supportedLength);
    setConditionCoordinateSystem((IfcAxis2Placement3D*)copyop(obj.m_conditionCoordinateSystem.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralMember::s_type("IfcRelConnectsStructuralMember");
