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

#include "ifc2x3/IfcFurnitureStandard.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFurnitureStandard::IfcFurnitureStandard(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcFurnitureStandard::~IfcFurnitureStandard() {
}

bool IfcFurnitureStandard::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFurnitureStandard(this);
}

const std::string &IfcFurnitureStandard::type() const {
    return IfcFurnitureStandard::s_type.getName();
}

const Step::ClassType &IfcFurnitureStandard::getClassType() {
    return IfcFurnitureStandard::s_type;
}

const Step::ClassType &IfcFurnitureStandard::getType() const {
    return IfcFurnitureStandard::s_type;
}

bool IfcFurnitureStandard::isOfType(const Step::ClassType &t) const {
    return IfcFurnitureStandard::s_type == t ? true : IfcControl::isOfType(t);
}

bool IfcFurnitureStandard::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFurnitureStandard::copy(const IfcFurnitureStandard &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnitureStandard::s_type("IfcFurnitureStandard");
