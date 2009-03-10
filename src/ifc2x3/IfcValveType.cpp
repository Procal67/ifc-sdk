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

#include "ifc2x3/IfcValveType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcValveType::IfcValveType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcValveTypeEnum_UNSET;
}

IfcValveType::~IfcValveType() {
}

bool IfcValveType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcValveType(this);
}

const std::string &IfcValveType::type() const {
    return IfcValveType::s_type.getName();
}

const Step::ClassType &IfcValveType::getClassType() {
    return IfcValveType::s_type;
}

const Step::ClassType &IfcValveType::getType() const {
    return IfcValveType::s_type;
}

bool IfcValveType::isOfType(const Step::ClassType &t) const {
    return IfcValveType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcValveTypeEnum IfcValveType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcValveTypeEnum_UNSET;
    }
}

const IfcValveTypeEnum IfcValveType::getPredefinedType() const {
    IfcValveType * deConstObject = const_cast< IfcValveType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcValveType::setPredefinedType(IfcValveTypeEnum value) {
    m_predefinedType = value;
}

bool IfcValveType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcValveTypeEnum_UNSET;
    }
    else {
        if (arg == ".AIRRELEASE.") {
            m_predefinedType = IfcValveTypeEnum_AIRRELEASE;
        }
        else if (arg == ".ANTIVACUUM.") {
            m_predefinedType = IfcValveTypeEnum_ANTIVACUUM;
        }
        else if (arg == ".CHANGEOVER.") {
            m_predefinedType = IfcValveTypeEnum_CHANGEOVER;
        }
        else if (arg == ".CHECK.") {
            m_predefinedType = IfcValveTypeEnum_CHECK;
        }
        else if (arg == ".COMMISSIONING.") {
            m_predefinedType = IfcValveTypeEnum_COMMISSIONING;
        }
        else if (arg == ".DIVERTING.") {
            m_predefinedType = IfcValveTypeEnum_DIVERTING;
        }
        else if (arg == ".DRAWOFFCOCK.") {
            m_predefinedType = IfcValveTypeEnum_DRAWOFFCOCK;
        }
        else if (arg == ".DOUBLECHECK.") {
            m_predefinedType = IfcValveTypeEnum_DOUBLECHECK;
        }
        else if (arg == ".DOUBLEREGULATING.") {
            m_predefinedType = IfcValveTypeEnum_DOUBLEREGULATING;
        }
        else if (arg == ".FAUCET.") {
            m_predefinedType = IfcValveTypeEnum_FAUCET;
        }
        else if (arg == ".FLUSHING.") {
            m_predefinedType = IfcValveTypeEnum_FLUSHING;
        }
        else if (arg == ".GASCOCK.") {
            m_predefinedType = IfcValveTypeEnum_GASCOCK;
        }
        else if (arg == ".GASTAP.") {
            m_predefinedType = IfcValveTypeEnum_GASTAP;
        }
        else if (arg == ".ISOLATING.") {
            m_predefinedType = IfcValveTypeEnum_ISOLATING;
        }
        else if (arg == ".MIXING.") {
            m_predefinedType = IfcValveTypeEnum_MIXING;
        }
        else if (arg == ".PRESSUREREDUCING.") {
            m_predefinedType = IfcValveTypeEnum_PRESSUREREDUCING;
        }
        else if (arg == ".PRESSURERELIEF.") {
            m_predefinedType = IfcValveTypeEnum_PRESSURERELIEF;
        }
        else if (arg == ".REGULATING.") {
            m_predefinedType = IfcValveTypeEnum_REGULATING;
        }
        else if (arg == ".SAFETYCUTOFF.") {
            m_predefinedType = IfcValveTypeEnum_SAFETYCUTOFF;
        }
        else if (arg == ".STEAMTRAP.") {
            m_predefinedType = IfcValveTypeEnum_STEAMTRAP;
        }
        else if (arg == ".STOPCOCK.") {
            m_predefinedType = IfcValveTypeEnum_STOPCOCK;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcValveTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcValveTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcValveType::copy(const IfcValveType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcValveType::s_type("IfcValveType");
