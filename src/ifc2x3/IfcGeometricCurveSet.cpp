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

#include "ifc2x3/IfcGeometricCurveSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricSet.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGeometricCurveSet::IfcGeometricCurveSet(Step::Id id, Step::SPFData *args) : IfcGeometricSet(id, args) {
}

IfcGeometricCurveSet::~IfcGeometricCurveSet() {
}

bool IfcGeometricCurveSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricCurveSet(this);
}

const std::string &IfcGeometricCurveSet::type() const {
    return IfcGeometricCurveSet::s_type.getName();
}

const Step::ClassType &IfcGeometricCurveSet::getClassType() {
    return IfcGeometricCurveSet::s_type;
}

const Step::ClassType &IfcGeometricCurveSet::getType() const {
    return IfcGeometricCurveSet::s_type;
}

bool IfcGeometricCurveSet::isOfType(const Step::ClassType &t) const {
    return IfcGeometricCurveSet::s_type == t ? true : IfcGeometricSet::isOfType(t);
}

bool IfcGeometricCurveSet::init() {
    bool status = IfcGeometricSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcGeometricCurveSet::copy(const IfcGeometricCurveSet &obj, const CopyOp &copyop) {
    IfcGeometricSet::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricCurveSet::s_type("IfcGeometricCurveSet");
