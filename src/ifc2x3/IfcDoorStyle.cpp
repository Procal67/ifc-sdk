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

#include "ifc2x3/IfcDoorStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTypeProduct.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDoorStyle::IfcDoorStyle(Step::Id id, Step::SPFData *args) : IfcTypeProduct(id, args) {
    m_operationType = IfcDoorStyleOperationEnum_UNSET;
    m_constructionType = IfcDoorStyleConstructionEnum_UNSET;
    m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    m_sizeable = Step::getUnset(m_sizeable);
}

IfcDoorStyle::~IfcDoorStyle() {
}

bool IfcDoorStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDoorStyle(this);
}

const std::string &IfcDoorStyle::type() const {
    return IfcDoorStyle::s_type.getName();
}

const Step::ClassType &IfcDoorStyle::getClassType() {
    return IfcDoorStyle::s_type;
}

const Step::ClassType &IfcDoorStyle::getType() const {
    return IfcDoorStyle::s_type;
}

bool IfcDoorStyle::isOfType(const Step::ClassType &t) const {
    return IfcDoorStyle::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcDoorStyleOperationEnum IfcDoorStyle::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcDoorStyleOperationEnum_UNSET;
    }
}

const IfcDoorStyleOperationEnum IfcDoorStyle::getOperationType() const {
    IfcDoorStyle * deConstObject = const_cast< IfcDoorStyle * > (this);
    return deConstObject->getOperationType();
}

void IfcDoorStyle::setOperationType(IfcDoorStyleOperationEnum value) {
    m_operationType = value;
}

IfcDoorStyleConstructionEnum IfcDoorStyle::getConstructionType() {
    if (Step::BaseObject::inited()) {
        return m_constructionType;
    }
    else {
        return IfcDoorStyleConstructionEnum_UNSET;
    }
}

const IfcDoorStyleConstructionEnum IfcDoorStyle::getConstructionType() const {
    IfcDoorStyle * deConstObject = const_cast< IfcDoorStyle * > (this);
    return deConstObject->getConstructionType();
}

void IfcDoorStyle::setConstructionType(IfcDoorStyleConstructionEnum value) {
    m_constructionType = value;
}

Step::Boolean IfcDoorStyle::getParameterTakesPrecedence() {
    if (Step::BaseObject::inited()) {
        return m_parameterTakesPrecedence;
    }
    else {
        return Step::getUnset(m_parameterTakesPrecedence);
    }
}

const Step::Boolean IfcDoorStyle::getParameterTakesPrecedence() const {
    IfcDoorStyle * deConstObject = const_cast< IfcDoorStyle * > (this);
    return deConstObject->getParameterTakesPrecedence();
}

void IfcDoorStyle::setParameterTakesPrecedence(Step::Boolean value) {
    m_parameterTakesPrecedence = value;
}

Step::Boolean IfcDoorStyle::getSizeable() {
    if (Step::BaseObject::inited()) {
        return m_sizeable;
    }
    else {
        return Step::getUnset(m_sizeable);
    }
}

const Step::Boolean IfcDoorStyle::getSizeable() const {
    IfcDoorStyle * deConstObject = const_cast< IfcDoorStyle * > (this);
    return deConstObject->getSizeable();
}

void IfcDoorStyle::setSizeable(Step::Boolean value) {
    m_sizeable = value;
}

bool IfcDoorStyle::init() {
    bool status = IfcTypeProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcDoorStyleOperationEnum_UNSET;
    }
    else {
        if (arg == ".SINGLE_SWING_LEFT.") {
            m_operationType = IfcDoorStyleOperationEnum_SINGLE_SWING_LEFT;
        }
        else if (arg == ".SINGLE_SWING_RIGHT.") {
            m_operationType = IfcDoorStyleOperationEnum_SINGLE_SWING_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT;
        }
        else if (arg == ".DOUBLE_SWING_LEFT.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_LEFT;
        }
        else if (arg == ".DOUBLE_SWING_RIGHT.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_DOUBLE_SWING.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_DOUBLE_SWING;
        }
        else if (arg == ".SLIDING_TO_LEFT.") {
            m_operationType = IfcDoorStyleOperationEnum_SLIDING_TO_LEFT;
        }
        else if (arg == ".SLIDING_TO_RIGHT.") {
            m_operationType = IfcDoorStyleOperationEnum_SLIDING_TO_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_SLIDING.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SLIDING;
        }
        else if (arg == ".FOLDING_TO_LEFT.") {
            m_operationType = IfcDoorStyleOperationEnum_FOLDING_TO_LEFT;
        }
        else if (arg == ".FOLDING_TO_RIGHT.") {
            m_operationType = IfcDoorStyleOperationEnum_FOLDING_TO_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_FOLDING.") {
            m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_FOLDING;
        }
        else if (arg == ".REVOLVING.") {
            m_operationType = IfcDoorStyleOperationEnum_REVOLVING;
        }
        else if (arg == ".ROLLINGUP.") {
            m_operationType = IfcDoorStyleOperationEnum_ROLLINGUP;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcDoorStyleOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcDoorStyleOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constructionType = IfcDoorStyleConstructionEnum_UNSET;
    }
    else {
        if (arg == ".ALUMINIUM.") {
            m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM;
        }
        else if (arg == ".HIGH_GRADE_STEEL.") {
            m_constructionType = IfcDoorStyleConstructionEnum_HIGH_GRADE_STEEL;
        }
        else if (arg == ".STEEL.") {
            m_constructionType = IfcDoorStyleConstructionEnum_STEEL;
        }
        else if (arg == ".WOOD.") {
            m_constructionType = IfcDoorStyleConstructionEnum_WOOD;
        }
        else if (arg == ".ALUMINIUM_WOOD.") {
            m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_WOOD;
        }
        else if (arg == ".ALUMINIUM_PLASTIC.") {
            m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_PLASTIC;
        }
        else if (arg == ".PLASTIC.") {
            m_constructionType = IfcDoorStyleConstructionEnum_PLASTIC;
        }
        else if (arg == ".USERDEFINED.") {
            m_constructionType = IfcDoorStyleConstructionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constructionType = IfcDoorStyleConstructionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    }
    else {
        m_parameterTakesPrecedence = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sizeable = Step::getUnset(m_sizeable);
    }
    else {
        m_sizeable = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcDoorStyle::copy(const IfcDoorStyle &obj, const CopyOp &copyop) {
    IfcTypeProduct::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setConstructionType(obj.m_constructionType);
    setParameterTakesPrecedence(obj.m_parameterTakesPrecedence);
    setSizeable(obj.m_sizeable);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorStyle::s_type("IfcDoorStyle");
