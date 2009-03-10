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

#include "ifc2x3/IfcRationalBezierCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBezierCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRationalBezierCurve::IfcRationalBezierCurve(Step::Id id, Step::SPFData *args) : IfcBezierCurve(id, args) {
}

IfcRationalBezierCurve::~IfcRationalBezierCurve() {
}

bool IfcRationalBezierCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRationalBezierCurve(this);
}

const std::string &IfcRationalBezierCurve::type() const {
    return IfcRationalBezierCurve::s_type.getName();
}

const Step::ClassType &IfcRationalBezierCurve::getClassType() {
    return IfcRationalBezierCurve::s_type;
}

const Step::ClassType &IfcRationalBezierCurve::getType() const {
    return IfcRationalBezierCurve::s_type;
}

bool IfcRationalBezierCurve::isOfType(const Step::ClassType &t) const {
    return IfcRationalBezierCurve::s_type == t ? true : IfcBezierCurve::isOfType(t);
}

List_Real_2_n &IfcRationalBezierCurve::getWeightsData() {
    if (Step::BaseObject::inited()) {
        return m_weightsData;
    }
    else {
        m_weightsData.setUnset(true);
        return m_weightsData;
    }
}

const List_Real_2_n &IfcRationalBezierCurve::getWeightsData() const {
    IfcRationalBezierCurve * deConstObject = const_cast< IfcRationalBezierCurve * > (this);
    return deConstObject->getWeightsData();
}

void IfcRationalBezierCurve::setWeightsData(const List_Real_2_n &value) {
    m_weightsData = value;
}

bool IfcRationalBezierCurve::init() {
    bool status = IfcBezierCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_weightsData.setUnset(true);
    }
    else {
        m_weightsData.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Real attr2;
                attr2 = Step::spfToReal(str1);
                m_weightsData.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRationalBezierCurve::copy(const IfcRationalBezierCurve &obj, const CopyOp &copyop) {
    Step::List< Step::Real, 2 >::const_iterator it_m_weightsData;
    IfcBezierCurve::copy(obj, copyop);
    for (it_m_weightsData = obj.m_weightsData.begin(); it_m_weightsData != obj.m_weightsData.end(); ++it_m_weightsData) {
        Step::Real copyTarget = (*it_m_weightsData);
        m_weightsData.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRationalBezierCurve::s_type("IfcRationalBezierCurve");
