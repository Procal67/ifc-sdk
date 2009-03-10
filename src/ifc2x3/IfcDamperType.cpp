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

#include "ifc2x3/IfcDamperType.h"

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

IfcDamperType::IfcDamperType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcDamperTypeEnum_UNSET;
}

IfcDamperType::~IfcDamperType() {
}

bool IfcDamperType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDamperType(this);
}

const std::string &IfcDamperType::type() const {
    return IfcDamperType::s_type.getName();
}

const Step::ClassType &IfcDamperType::getClassType() {
    return IfcDamperType::s_type;
}

const Step::ClassType &IfcDamperType::getType() const {
    return IfcDamperType::s_type;
}

bool IfcDamperType::isOfType(const Step::ClassType &t) const {
    return IfcDamperType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcDamperTypeEnum IfcDamperType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDamperTypeEnum_UNSET;
    }
}

const IfcDamperTypeEnum IfcDamperType::getPredefinedType() const {
    IfcDamperType * deConstObject = const_cast< IfcDamperType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcDamperType::setPredefinedType(IfcDamperTypeEnum value) {
    m_predefinedType = value;
}

bool IfcDamperType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDamperTypeEnum_UNSET;
    }
    else {
        if (arg == ".CONTROLDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_CONTROLDAMPER;
        }
        else if (arg == ".FIREDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_FIREDAMPER;
        }
        else if (arg == ".SMOKEDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_SMOKEDAMPER;
        }
        else if (arg == ".FIRESMOKEDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_FIRESMOKEDAMPER;
        }
        else if (arg == ".BACKDRAFTDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_BACKDRAFTDAMPER;
        }
        else if (arg == ".RELIEFDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_RELIEFDAMPER;
        }
        else if (arg == ".BLASTDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_BLASTDAMPER;
        }
        else if (arg == ".GRAVITYDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_GRAVITYDAMPER;
        }
        else if (arg == ".GRAVITYRELIEFDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_GRAVITYRELIEFDAMPER;
        }
        else if (arg == ".BALANCINGDAMPER.") {
            m_predefinedType = IfcDamperTypeEnum_BALANCINGDAMPER;
        }
        else if (arg == ".FUMEHOODEXHAUST.") {
            m_predefinedType = IfcDamperTypeEnum_FUMEHOODEXHAUST;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDamperTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDamperTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDamperType::copy(const IfcDamperType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDamperType::s_type("IfcDamperType");
