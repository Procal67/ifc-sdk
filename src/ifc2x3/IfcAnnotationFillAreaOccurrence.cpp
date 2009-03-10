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

#include "ifc2x3/IfcAnnotationFillAreaOccurrence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/IfcPoint.h"
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

IfcAnnotationFillAreaOccurrence::IfcAnnotationFillAreaOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
    m_fillStyleTarget = NULL;
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

IfcAnnotationFillAreaOccurrence::~IfcAnnotationFillAreaOccurrence() {
}

bool IfcAnnotationFillAreaOccurrence::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationFillAreaOccurrence(this);
}

const std::string &IfcAnnotationFillAreaOccurrence::type() const {
    return IfcAnnotationFillAreaOccurrence::s_type.getName();
}

const Step::ClassType &IfcAnnotationFillAreaOccurrence::getClassType() {
    return IfcAnnotationFillAreaOccurrence::s_type;
}

const Step::ClassType &IfcAnnotationFillAreaOccurrence::getType() const {
    return IfcAnnotationFillAreaOccurrence::s_type;
}

bool IfcAnnotationFillAreaOccurrence::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationFillAreaOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

IfcPoint *IfcAnnotationFillAreaOccurrence::getFillStyleTarget() {
    if (Step::BaseObject::inited()) {
        return m_fillStyleTarget.get();
    }
    else {
        return NULL;
    }
}

const IfcPoint *IfcAnnotationFillAreaOccurrence::getFillStyleTarget() const {
    IfcAnnotationFillAreaOccurrence * deConstObject = const_cast< IfcAnnotationFillAreaOccurrence * > (this);
    return deConstObject->getFillStyleTarget();
}

void IfcAnnotationFillAreaOccurrence::setFillStyleTarget(const Step::RefPtr< IfcPoint > &value) {
    m_fillStyleTarget = value;
}

IfcGlobalOrLocalEnum IfcAnnotationFillAreaOccurrence::getGlobalOrLocal() {
    if (Step::BaseObject::inited()) {
        return m_globalOrLocal;
    }
    else {
        return IfcGlobalOrLocalEnum_UNSET;
    }
}

const IfcGlobalOrLocalEnum IfcAnnotationFillAreaOccurrence::getGlobalOrLocal() const {
    IfcAnnotationFillAreaOccurrence * deConstObject = const_cast< IfcAnnotationFillAreaOccurrence * > (this);
    return deConstObject->getGlobalOrLocal();
}

void IfcAnnotationFillAreaOccurrence::setGlobalOrLocal(IfcGlobalOrLocalEnum value) {
    m_globalOrLocal = value;
}

bool IfcAnnotationFillAreaOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fillStyleTarget = NULL;
    }
    else {
        m_fillStyleTarget = static_cast< IfcPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
    }
    else {
        if (arg == ".GLOBAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
        }
        else if (arg == ".LOCAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
        }
    }
    return true;
}

void IfcAnnotationFillAreaOccurrence::copy(const IfcAnnotationFillAreaOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    setFillStyleTarget((IfcPoint*)copyop(obj.m_fillStyleTarget.get()));
    setGlobalOrLocal(obj.m_globalOrLocal);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationFillAreaOccurrence::s_type("IfcAnnotationFillAreaOccurrence");
