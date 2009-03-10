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

#include "ifc2x3/IfcElectricalElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElectricalElement::IfcElectricalElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcElectricalElement::~IfcElectricalElement() {
}

bool IfcElectricalElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricalElement(this);
}

const std::string &IfcElectricalElement::type() const {
    return IfcElectricalElement::s_type.getName();
}

const Step::ClassType &IfcElectricalElement::getClassType() {
    return IfcElectricalElement::s_type;
}

const Step::ClassType &IfcElectricalElement::getType() const {
    return IfcElectricalElement::s_type;
}

bool IfcElectricalElement::isOfType(const Step::ClassType &t) const {
    return IfcElectricalElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcElectricalElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElectricalElement::copy(const IfcElectricalElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricalElement::s_type("IfcElectricalElement");
