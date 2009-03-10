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

#include "ifc2x3/IfcBuildingElementProxy.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBuildingElementProxy::IfcBuildingElementProxy(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_compositionType = IfcElementCompositionEnum_UNSET;
}

IfcBuildingElementProxy::~IfcBuildingElementProxy() {
}

bool IfcBuildingElementProxy::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElementProxy(this);
}

const std::string &IfcBuildingElementProxy::type() const {
    return IfcBuildingElementProxy::s_type.getName();
}

const Step::ClassType &IfcBuildingElementProxy::getClassType() {
    return IfcBuildingElementProxy::s_type;
}

const Step::ClassType &IfcBuildingElementProxy::getType() const {
    return IfcBuildingElementProxy::s_type;
}

bool IfcBuildingElementProxy::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElementProxy::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() {
    if (Step::BaseObject::inited()) {
        return m_compositionType;
    }
    else {
        return IfcElementCompositionEnum_UNSET;
    }
}

const IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() const {
    IfcBuildingElementProxy * deConstObject = const_cast< IfcBuildingElementProxy * > (this);
    return deConstObject->getCompositionType();
}

void IfcBuildingElementProxy::setCompositionType(IfcElementCompositionEnum value) {
    m_compositionType = value;
}

bool IfcBuildingElementProxy::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compositionType = IfcElementCompositionEnum_UNSET;
    }
    else {
        if (arg == ".COMPLEX.") {
            m_compositionType = IfcElementCompositionEnum_COMPLEX;
        }
        else if (arg == ".ELEMENT.") {
            m_compositionType = IfcElementCompositionEnum_ELEMENT;
        }
        else if (arg == ".PARTIAL.") {
            m_compositionType = IfcElementCompositionEnum_PARTIAL;
        }
    }
    return true;
}

void IfcBuildingElementProxy::copy(const IfcBuildingElementProxy &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setCompositionType(obj.m_compositionType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementProxy::s_type("IfcBuildingElementProxy");
