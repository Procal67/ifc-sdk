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

#include "ifc2x3/IfcWorkSchedule.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcWorkControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWorkSchedule::IfcWorkSchedule(Step::Id id, Step::SPFData *args) : IfcWorkControl(id, args) {
}

IfcWorkSchedule::~IfcWorkSchedule() {
}

bool IfcWorkSchedule::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWorkSchedule(this);
}

const std::string &IfcWorkSchedule::type() const {
    return IfcWorkSchedule::s_type.getName();
}

const Step::ClassType &IfcWorkSchedule::getClassType() {
    return IfcWorkSchedule::s_type;
}

const Step::ClassType &IfcWorkSchedule::getType() const {
    return IfcWorkSchedule::s_type;
}

bool IfcWorkSchedule::isOfType(const Step::ClassType &t) const {
    return IfcWorkSchedule::s_type == t ? true : IfcWorkControl::isOfType(t);
}

bool IfcWorkSchedule::init() {
    bool status = IfcWorkControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWorkSchedule::copy(const IfcWorkSchedule &obj, const CopyOp &copyop) {
    IfcWorkControl::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWorkSchedule::s_type("IfcWorkSchedule");
