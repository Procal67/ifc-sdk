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

#include "ifc2x3/IfcBuildingElement.h"

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

IfcBuildingElement::IfcBuildingElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcBuildingElement::~IfcBuildingElement() {
}

bool IfcBuildingElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElement(this);
}

const std::string &IfcBuildingElement::type() const {
    return IfcBuildingElement::s_type.getName();
}

const Step::ClassType &IfcBuildingElement::getClassType() {
    return IfcBuildingElement::s_type;
}

const Step::ClassType &IfcBuildingElement::getType() const {
    return IfcBuildingElement::s_type;
}

bool IfcBuildingElement::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcBuildingElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBuildingElement::copy(const IfcBuildingElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElement::s_type("IfcBuildingElement");
