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

#include "ifc2x3/IfcDistributionFlowElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionFlowElementType::IfcDistributionFlowElementType(Step::Id id, Step::SPFData *args) : IfcDistributionElementType(id, args) {
}

IfcDistributionFlowElementType::~IfcDistributionFlowElementType() {
}

bool IfcDistributionFlowElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionFlowElementType(this);
}

const std::string &IfcDistributionFlowElementType::type() const {
    return IfcDistributionFlowElementType::s_type.getName();
}

const Step::ClassType &IfcDistributionFlowElementType::getClassType() {
    return IfcDistributionFlowElementType::s_type;
}

const Step::ClassType &IfcDistributionFlowElementType::getType() const {
    return IfcDistributionFlowElementType::s_type;
}

bool IfcDistributionFlowElementType::isOfType(const Step::ClassType &t) const {
    return IfcDistributionFlowElementType::s_type == t ? true : IfcDistributionElementType::isOfType(t);
}

bool IfcDistributionFlowElementType::init() {
    bool status = IfcDistributionElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionFlowElementType::copy(const IfcDistributionFlowElementType &obj, const CopyOp &copyop) {
    IfcDistributionElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionFlowElementType::s_type("IfcDistributionFlowElementType");
