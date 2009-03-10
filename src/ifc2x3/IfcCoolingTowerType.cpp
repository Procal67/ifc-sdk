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

#include "ifc2x3/IfcCoolingTowerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCoolingTowerType::IfcCoolingTowerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCoolingTowerTypeEnum_UNSET;
}

IfcCoolingTowerType::~IfcCoolingTowerType() {
}

bool IfcCoolingTowerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCoolingTowerType(this);
}

const std::string &IfcCoolingTowerType::type() const {
    return IfcCoolingTowerType::s_type.getName();
}

const Step::ClassType &IfcCoolingTowerType::getClassType() {
    return IfcCoolingTowerType::s_type;
}

const Step::ClassType &IfcCoolingTowerType::getType() const {
    return IfcCoolingTowerType::s_type;
}

bool IfcCoolingTowerType::isOfType(const Step::ClassType &t) const {
    return IfcCoolingTowerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCoolingTowerTypeEnum IfcCoolingTowerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoolingTowerTypeEnum_UNSET;
    }
}

const IfcCoolingTowerTypeEnum IfcCoolingTowerType::getPredefinedType() const {
    IfcCoolingTowerType * deConstObject = const_cast< IfcCoolingTowerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCoolingTowerType::setPredefinedType(IfcCoolingTowerTypeEnum value) {
    m_predefinedType = value;
}

bool IfcCoolingTowerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCoolingTowerTypeEnum_UNSET;
    }
    else {
        if (arg == ".NATURALDRAFT.") {
            m_predefinedType = IfcCoolingTowerTypeEnum_NATURALDRAFT;
        }
        else if (arg == ".MECHANICALINDUCEDDRAFT.") {
            m_predefinedType = IfcCoolingTowerTypeEnum_MECHANICALINDUCEDDRAFT;
        }
        else if (arg == ".MECHANICALFORCEDDRAFT.") {
            m_predefinedType = IfcCoolingTowerTypeEnum_MECHANICALFORCEDDRAFT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCoolingTowerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCoolingTowerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoolingTowerType::copy(const IfcCoolingTowerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoolingTowerType::s_type("IfcCoolingTowerType");
