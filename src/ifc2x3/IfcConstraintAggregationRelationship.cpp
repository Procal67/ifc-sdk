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

#include "ifc2x3/IfcConstraintAggregationRelationship.h"


#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
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

Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type() {
}

void Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::setOwner(IfcConstraintAggregationRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::push_back(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    List_IfcConstraint_1_n::push_back(value);
    inverse->m_isAggregatedIn.insert(mOwner);
}

Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::iterator Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::erase(const Step::RefPtr< IfcConstraint > &value) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    inverse->m_isAggregatedIn.erase(mOwner);
    return List_IfcConstraint_1_n::erase(value);
}

IfcConstraintAggregationRelationship::IfcConstraintAggregationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingConstraint = NULL;
    m_relatedConstraints.setUnset(true);
    m_relatedConstraints.setOwner(this);
    m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
}

IfcConstraintAggregationRelationship::~IfcConstraintAggregationRelationship() {
}

bool IfcConstraintAggregationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraintAggregationRelationship(this);
}

const std::string &IfcConstraintAggregationRelationship::type() const {
    return IfcConstraintAggregationRelationship::s_type.getName();
}

const Step::ClassType &IfcConstraintAggregationRelationship::getClassType() {
    return IfcConstraintAggregationRelationship::s_type;
}

const Step::ClassType &IfcConstraintAggregationRelationship::getType() const {
    return IfcConstraintAggregationRelationship::s_type;
}

bool IfcConstraintAggregationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcConstraintAggregationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintAggregationRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConstraintAggregationRelationship::getName() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getName();
}

void IfcConstraintAggregationRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcConstraintAggregationRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcConstraintAggregationRelationship::getDescription() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcConstraintAggregationRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcConstraintAggregationRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_relatingConstraint.valid()) {
        m_relatingConstraint->m_aggregates.erase(this);
    }
    if (value.valid()) {
        value->m_aggregates.insert(this);
    }
    m_relatingConstraint = value;
}

List_IfcConstraint_1_n &IfcConstraintAggregationRelationship::getRelatedConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatedConstraints;
    }
    else {
        m_relatedConstraints.setUnset(true);
        return m_relatedConstraints;
    }
}

const List_IfcConstraint_1_n &IfcConstraintAggregationRelationship::getRelatedConstraints() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getRelatedConstraints();
}

IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() {
    if (Step::BaseObject::inited()) {
        return m_logicalAggregator;
    }
    else {
        return IfcLogicalOperatorEnum_UNSET;
    }
}

const IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getLogicalAggregator();
}

void IfcConstraintAggregationRelationship::setLogicalAggregator(IfcLogicalOperatorEnum value) {
    m_logicalAggregator = value;
}

bool IfcConstraintAggregationRelationship::init() {
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
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedConstraints.setUnset(true);
    }
    else {
        m_relatedConstraints.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcConstraint > attr2;
                attr2 = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_relatedConstraints.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
    }
    else {
        if (arg == ".LOGICALAND.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALAND;
        }
        else if (arg == ".LOGICALOR.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALOR;
        }
    }
    return true;
}

void IfcConstraintAggregationRelationship::copy(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcConstraint >, 1 >::const_iterator it_m_relatedConstraints;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedConstraints = obj.m_relatedConstraints.begin(); it_m_relatedConstraints != obj.m_relatedConstraints.end(); ++it_m_relatedConstraints) {
        Step::RefPtr< IfcConstraint > copyTarget = (IfcConstraint *) (copyop((*it_m_relatedConstraints).get()));
        m_relatedConstraints.push_back(copyTarget.get());
    }
    setLogicalAggregator(obj.m_logicalAggregator);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintAggregationRelationship::s_type("IfcConstraintAggregationRelationship");
