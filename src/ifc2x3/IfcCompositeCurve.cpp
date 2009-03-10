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

#include "ifc2x3/IfcCompositeCurve.h"


#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcCompositeCurveSegment.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Inverted_IfcCompositeCurve_Segments_type::Inverted_IfcCompositeCurve_Segments_type() {
}

void Inverted_IfcCompositeCurve_Segments_type::setOwner(IfcCompositeCurve *owner) {
    mOwner = owner;
}

void Inverted_IfcCompositeCurve_Segments_type::push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value) throw(std::out_of_range) {
    IfcCompositeCurveSegment *inverse = const_cast< IfcCompositeCurveSegment * > (value.get());
    List_IfcCompositeCurveSegment_1_n::push_back(value);
    inverse->m_usingCurves.insert(mOwner);
}

Inverted_IfcCompositeCurve_Segments_type::iterator Inverted_IfcCompositeCurve_Segments_type::erase(const Step::RefPtr< IfcCompositeCurveSegment > &value) {
    IfcCompositeCurveSegment *inverse = const_cast< IfcCompositeCurveSegment * > (value.get());
    inverse->m_usingCurves.erase(mOwner);
    return List_IfcCompositeCurveSegment_1_n::erase(value);
}

IfcCompositeCurve::IfcCompositeCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_segments.setUnset(true);
    m_segments.setOwner(this);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
}

IfcCompositeCurve::~IfcCompositeCurve() {
}

bool IfcCompositeCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCompositeCurve(this);
}

const std::string &IfcCompositeCurve::type() const {
    return IfcCompositeCurve::s_type.getName();
}

const Step::ClassType &IfcCompositeCurve::getClassType() {
    return IfcCompositeCurve::s_type;
}

const Step::ClassType &IfcCompositeCurve::getType() const {
    return IfcCompositeCurve::s_type;
}

bool IfcCompositeCurve::isOfType(const Step::ClassType &t) const {
    return IfcCompositeCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

List_IfcCompositeCurveSegment_1_n &IfcCompositeCurve::getSegments() {
    if (Step::BaseObject::inited()) {
        return m_segments;
    }
    else {
        m_segments.setUnset(true);
        return m_segments;
    }
}

const List_IfcCompositeCurveSegment_1_n &IfcCompositeCurve::getSegments() const {
    IfcCompositeCurve * deConstObject = const_cast< IfcCompositeCurve * > (this);
    return deConstObject->getSegments();
}

Step::Logical IfcCompositeCurve::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

const Step::Logical IfcCompositeCurve::getSelfIntersect() const {
    IfcCompositeCurve * deConstObject = const_cast< IfcCompositeCurve * > (this);
    return deConstObject->getSelfIntersect();
}

void IfcCompositeCurve::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

bool IfcCompositeCurve::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_segments.setUnset(true);
    }
    else {
        m_segments.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCompositeCurveSegment > attr2;
                attr2 = static_cast< IfcCompositeCurveSegment * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_segments.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_selfIntersect = Step::getUnset(m_selfIntersect);
    }
    else {
        m_selfIntersect = Step::spfToLogical(arg);
    }
    return true;
}

void IfcCompositeCurve::copy(const IfcCompositeCurve &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCompositeCurveSegment >, 1 >::const_iterator it_m_segments;
    IfcBoundedCurve::copy(obj, copyop);
    for (it_m_segments = obj.m_segments.begin(); it_m_segments != obj.m_segments.end(); ++it_m_segments) {
        Step::RefPtr< IfcCompositeCurveSegment > copyTarget = (IfcCompositeCurveSegment *) (copyop((*it_m_segments).get()));
        m_segments.push_back(copyTarget.get());
    }
    setSelfIntersect(obj.m_selfIntersect);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeCurve::s_type("IfcCompositeCurve");
