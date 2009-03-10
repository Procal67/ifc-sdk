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

#include "ifc2x3/IfcOwnerHistory.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcApplication.h"
#include "ifc2x3/IfcPersonAndOrganization.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOwnerHistory::IfcOwnerHistory(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_owningUser = NULL;
    m_owningApplication = NULL;
    m_state = IfcStateEnum_UNSET;
    m_changeAction = IfcChangeActionEnum_UNSET;
    m_lastModifiedDate = Step::getUnset(m_lastModifiedDate);
    m_lastModifyingUser = NULL;
    m_lastModifyingApplication = NULL;
    m_creationDate = Step::getUnset(m_creationDate);
}

IfcOwnerHistory::~IfcOwnerHistory() {
}

bool IfcOwnerHistory::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOwnerHistory(this);
}

const std::string &IfcOwnerHistory::type() const {
    return IfcOwnerHistory::s_type.getName();
}

const Step::ClassType &IfcOwnerHistory::getClassType() {
    return IfcOwnerHistory::s_type;
}

const Step::ClassType &IfcOwnerHistory::getType() const {
    return IfcOwnerHistory::s_type;
}

bool IfcOwnerHistory::isOfType(const Step::ClassType &t) const {
    return IfcOwnerHistory::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPersonAndOrganization *IfcOwnerHistory::getOwningUser() {
    if (Step::BaseObject::inited()) {
        return m_owningUser.get();
    }
    else {
        return NULL;
    }
}

const IfcPersonAndOrganization *IfcOwnerHistory::getOwningUser() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getOwningUser();
}

void IfcOwnerHistory::setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value) {
    m_owningUser = value;
}

IfcApplication *IfcOwnerHistory::getOwningApplication() {
    if (Step::BaseObject::inited()) {
        return m_owningApplication.get();
    }
    else {
        return NULL;
    }
}

const IfcApplication *IfcOwnerHistory::getOwningApplication() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getOwningApplication();
}

void IfcOwnerHistory::setOwningApplication(const Step::RefPtr< IfcApplication > &value) {
    m_owningApplication = value;
}

IfcStateEnum IfcOwnerHistory::getState() {
    if (Step::BaseObject::inited()) {
        return m_state;
    }
    else {
        return IfcStateEnum_UNSET;
    }
}

const IfcStateEnum IfcOwnerHistory::getState() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getState();
}

void IfcOwnerHistory::setState(IfcStateEnum value) {
    m_state = value;
}

IfcChangeActionEnum IfcOwnerHistory::getChangeAction() {
    if (Step::BaseObject::inited()) {
        return m_changeAction;
    }
    else {
        return IfcChangeActionEnum_UNSET;
    }
}

const IfcChangeActionEnum IfcOwnerHistory::getChangeAction() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getChangeAction();
}

void IfcOwnerHistory::setChangeAction(IfcChangeActionEnum value) {
    m_changeAction = value;
}

IfcTimeStamp IfcOwnerHistory::getLastModifiedDate() {
    if (Step::BaseObject::inited()) {
        return m_lastModifiedDate;
    }
    else {
        return Step::getUnset(m_lastModifiedDate);
    }
}

const IfcTimeStamp IfcOwnerHistory::getLastModifiedDate() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getLastModifiedDate();
}

void IfcOwnerHistory::setLastModifiedDate(IfcTimeStamp value) {
    m_lastModifiedDate = value;
}

IfcPersonAndOrganization *IfcOwnerHistory::getLastModifyingUser() {
    if (Step::BaseObject::inited()) {
        return m_lastModifyingUser.get();
    }
    else {
        return NULL;
    }
}

const IfcPersonAndOrganization *IfcOwnerHistory::getLastModifyingUser() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getLastModifyingUser();
}

void IfcOwnerHistory::setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value) {
    m_lastModifyingUser = value;
}

IfcApplication *IfcOwnerHistory::getLastModifyingApplication() {
    if (Step::BaseObject::inited()) {
        return m_lastModifyingApplication.get();
    }
    else {
        return NULL;
    }
}

const IfcApplication *IfcOwnerHistory::getLastModifyingApplication() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getLastModifyingApplication();
}

void IfcOwnerHistory::setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value) {
    m_lastModifyingApplication = value;
}

IfcTimeStamp IfcOwnerHistory::getCreationDate() {
    if (Step::BaseObject::inited()) {
        return m_creationDate;
    }
    else {
        return Step::getUnset(m_creationDate);
    }
}

const IfcTimeStamp IfcOwnerHistory::getCreationDate() const {
    IfcOwnerHistory * deConstObject = const_cast< IfcOwnerHistory * > (this);
    return deConstObject->getCreationDate();
}

void IfcOwnerHistory::setCreationDate(IfcTimeStamp value) {
    m_creationDate = value;
}

bool IfcOwnerHistory::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_owningUser = NULL;
    }
    else {
        m_owningUser = static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_owningApplication = NULL;
    }
    else {
        m_owningApplication = static_cast< IfcApplication * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_state = IfcStateEnum_UNSET;
    }
    else {
        if (arg == ".READWRITE.") {
            m_state = IfcStateEnum_READWRITE;
        }
        else if (arg == ".READONLY.") {
            m_state = IfcStateEnum_READONLY;
        }
        else if (arg == ".LOCKED.") {
            m_state = IfcStateEnum_LOCKED;
        }
        else if (arg == ".READWRITELOCKED.") {
            m_state = IfcStateEnum_READWRITELOCKED;
        }
        else if (arg == ".READONLYLOCKED.") {
            m_state = IfcStateEnum_READONLYLOCKED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_changeAction = IfcChangeActionEnum_UNSET;
    }
    else {
        if (arg == ".NOCHANGE.") {
            m_changeAction = IfcChangeActionEnum_NOCHANGE;
        }
        else if (arg == ".MODIFIED.") {
            m_changeAction = IfcChangeActionEnum_MODIFIED;
        }
        else if (arg == ".ADDED.") {
            m_changeAction = IfcChangeActionEnum_ADDED;
        }
        else if (arg == ".DELETED.") {
            m_changeAction = IfcChangeActionEnum_DELETED;
        }
        else if (arg == ".MODIFIEDADDED.") {
            m_changeAction = IfcChangeActionEnum_MODIFIEDADDED;
        }
        else if (arg == ".MODIFIEDDELETED.") {
            m_changeAction = IfcChangeActionEnum_MODIFIEDDELETED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastModifiedDate = Step::getUnset(m_lastModifiedDate);
    }
    else {
        m_lastModifiedDate = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastModifyingUser = NULL;
    }
    else {
        m_lastModifyingUser = static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastModifyingApplication = NULL;
    }
    else {
        m_lastModifyingApplication = static_cast< IfcApplication * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationDate = Step::getUnset(m_creationDate);
    }
    else {
        m_creationDate = Step::spfToInteger(arg);
    }
    return true;
}

void IfcOwnerHistory::copy(const IfcOwnerHistory &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setOwningUser((IfcPersonAndOrganization*)copyop(obj.m_owningUser.get()));
    setOwningApplication((IfcApplication*)copyop(obj.m_owningApplication.get()));
    setState(obj.m_state);
    setChangeAction(obj.m_changeAction);
    setLastModifiedDate(obj.m_lastModifiedDate);
    setLastModifyingUser((IfcPersonAndOrganization*)copyop(obj.m_lastModifyingUser.get()));
    setLastModifyingApplication((IfcApplication*)copyop(obj.m_lastModifyingApplication.get()));
    setCreationDate(obj.m_creationDate);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOwnerHistory::s_type("IfcOwnerHistory");
