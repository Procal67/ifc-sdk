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

#include "ifc2x3/IfcSpaceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSpatialStructureElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSpaceType::IfcSpaceType(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElementType(id, args) {
    m_predefinedType = IfcSpaceTypeEnum_UNSET;
}

IfcSpaceType::~IfcSpaceType() {
}

bool IfcSpaceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpaceType(this);
}

const std::string &IfcSpaceType::type() const {
    return IfcSpaceType::s_type.getName();
}

const Step::ClassType &IfcSpaceType::getClassType() {
    return IfcSpaceType::s_type;
}

const Step::ClassType &IfcSpaceType::getType() const {
    return IfcSpaceType::s_type;
}

bool IfcSpaceType::isOfType(const Step::ClassType &t) const {
    return IfcSpaceType::s_type == t ? true : IfcSpatialStructureElementType::isOfType(t);
}

IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSpaceTypeEnum_UNSET;
    }
}

const IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() const {
    IfcSpaceType * deConstObject = const_cast< IfcSpaceType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSpaceType::setPredefinedType(IfcSpaceTypeEnum value) {
    m_predefinedType = value;
}

bool IfcSpaceType::init() {
    bool status = IfcSpatialStructureElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSpaceTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSpaceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSpaceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceType::copy(const IfcSpaceType &obj, const CopyOp &copyop) {
    IfcSpatialStructureElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceType::s_type("IfcSpaceType");
