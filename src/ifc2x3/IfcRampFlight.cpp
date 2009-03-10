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

#include "ifc2x3/IfcRampFlight.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRampFlight::IfcRampFlight(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcRampFlight::~IfcRampFlight() {
}

bool IfcRampFlight::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRampFlight(this);
}

const std::string &IfcRampFlight::type() const {
    return IfcRampFlight::s_type.getName();
}

const Step::ClassType &IfcRampFlight::getClassType() {
    return IfcRampFlight::s_type;
}

const Step::ClassType &IfcRampFlight::getType() const {
    return IfcRampFlight::s_type;
}

bool IfcRampFlight::isOfType(const Step::ClassType &t) const {
    return IfcRampFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcRampFlight::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRampFlight::copy(const IfcRampFlight &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRampFlight::s_type("IfcRampFlight");
