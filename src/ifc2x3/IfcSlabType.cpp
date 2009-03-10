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

#include "ifc2x3/IfcSlabType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSlabType::IfcSlabType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcSlabTypeEnum_UNSET;
}

IfcSlabType::~IfcSlabType() {
}

bool IfcSlabType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSlabType(this);
}

const std::string &IfcSlabType::type() const {
    return IfcSlabType::s_type.getName();
}

const Step::ClassType &IfcSlabType::getClassType() {
    return IfcSlabType::s_type;
}

const Step::ClassType &IfcSlabType::getType() const {
    return IfcSlabType::s_type;
}

bool IfcSlabType::isOfType(const Step::ClassType &t) const {
    return IfcSlabType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcSlabTypeEnum IfcSlabType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSlabTypeEnum_UNSET;
    }
}

const IfcSlabTypeEnum IfcSlabType::getPredefinedType() const {
    IfcSlabType * deConstObject = const_cast< IfcSlabType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSlabType::setPredefinedType(IfcSlabTypeEnum value) {
    m_predefinedType = value;
}

bool IfcSlabType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSlabTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLOOR.") {
            m_predefinedType = IfcSlabTypeEnum_FLOOR;
        }
        else if (arg == ".ROOF.") {
            m_predefinedType = IfcSlabTypeEnum_ROOF;
        }
        else if (arg == ".LANDING.") {
            m_predefinedType = IfcSlabTypeEnum_LANDING;
        }
        else if (arg == ".BASESLAB.") {
            m_predefinedType = IfcSlabTypeEnum_BASESLAB;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSlabTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSlabTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSlabType::copy(const IfcSlabType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSlabType::s_type("IfcSlabType");
