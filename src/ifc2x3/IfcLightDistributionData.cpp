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

#include "ifc2x3/IfcLightDistributionData.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightDistributionData::IfcLightDistributionData(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_mainPlaneAngle = Step::getUnset(m_mainPlaneAngle);
}

IfcLightDistributionData::~IfcLightDistributionData() {
}

bool IfcLightDistributionData::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightDistributionData(this);
}

const std::string &IfcLightDistributionData::type() const {
    return IfcLightDistributionData::s_type.getName();
}

const Step::ClassType &IfcLightDistributionData::getClassType() {
    return IfcLightDistributionData::s_type;
}

const Step::ClassType &IfcLightDistributionData::getType() const {
    return IfcLightDistributionData::s_type;
}

bool IfcLightDistributionData::isOfType(const Step::ClassType &t) const {
    return IfcLightDistributionData::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPlaneAngleMeasure IfcLightDistributionData::getMainPlaneAngle() {
    if (Step::BaseObject::inited()) {
        return m_mainPlaneAngle;
    }
    else {
        return Step::getUnset(m_mainPlaneAngle);
    }
}

const IfcPlaneAngleMeasure IfcLightDistributionData::getMainPlaneAngle() const {
    IfcLightDistributionData * deConstObject = const_cast< IfcLightDistributionData * > (this);
    return deConstObject->getMainPlaneAngle();
}

void IfcLightDistributionData::setMainPlaneAngle(IfcPlaneAngleMeasure value) {
    m_mainPlaneAngle = value;
}

List_IfcPlaneAngleMeasure_1_n &IfcLightDistributionData::getSecondaryPlaneAngle() {
    if (Step::BaseObject::inited()) {
        return m_secondaryPlaneAngle;
    }
    else {
        m_secondaryPlaneAngle.setUnset(true);
        return m_secondaryPlaneAngle;
    }
}

const List_IfcPlaneAngleMeasure_1_n &IfcLightDistributionData::getSecondaryPlaneAngle() const {
    IfcLightDistributionData * deConstObject = const_cast< IfcLightDistributionData * > (this);
    return deConstObject->getSecondaryPlaneAngle();
}

void IfcLightDistributionData::setSecondaryPlaneAngle(const List_IfcPlaneAngleMeasure_1_n &value) {
    m_secondaryPlaneAngle = value;
}

List_IfcLuminousIntensityDistributionMeasure_1_n &IfcLightDistributionData::getLuminousIntensity() {
    if (Step::BaseObject::inited()) {
        return m_luminousIntensity;
    }
    else {
        m_luminousIntensity.setUnset(true);
        return m_luminousIntensity;
    }
}

const List_IfcLuminousIntensityDistributionMeasure_1_n &IfcLightDistributionData::getLuminousIntensity() const {
    IfcLightDistributionData * deConstObject = const_cast< IfcLightDistributionData * > (this);
    return deConstObject->getLuminousIntensity();
}

void IfcLightDistributionData::setLuminousIntensity(const List_IfcLuminousIntensityDistributionMeasure_1_n &value) {
    m_luminousIntensity = value;
}

bool IfcLightDistributionData::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mainPlaneAngle = Step::getUnset(m_mainPlaneAngle);
    }
    else {
        m_mainPlaneAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondaryPlaneAngle.setUnset(true);
    }
    else {
        m_secondaryPlaneAngle.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcPlaneAngleMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_secondaryPlaneAngle.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_luminousIntensity.setUnset(true);
    }
    else {
        m_luminousIntensity.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLuminousIntensityDistributionMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_luminousIntensity.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcLightDistributionData::copy(const IfcLightDistributionData &obj, const CopyOp &copyop) {
    Step::List< IfcPlaneAngleMeasure, 1 >::const_iterator it_m_secondaryPlaneAngle;
    Step::List< IfcLuminousIntensityDistributionMeasure, 1 >::const_iterator it_m_luminousIntensity;
    Step::BaseEntity::copy(obj, copyop);
    setMainPlaneAngle(obj.m_mainPlaneAngle);
    for (it_m_secondaryPlaneAngle = obj.m_secondaryPlaneAngle.begin(); it_m_secondaryPlaneAngle != obj.m_secondaryPlaneAngle.end(); ++it_m_secondaryPlaneAngle) {
        IfcPlaneAngleMeasure copyTarget = (*it_m_secondaryPlaneAngle);
        m_secondaryPlaneAngle.push_back(copyTarget);
    }
    for (it_m_luminousIntensity = obj.m_luminousIntensity.begin(); it_m_luminousIntensity != obj.m_luminousIntensity.end(); ++it_m_luminousIntensity) {
        IfcLuminousIntensityDistributionMeasure copyTarget = (*it_m_luminousIntensity);
        m_luminousIntensity.push_back(copyTarget);
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightDistributionData::s_type("IfcLightDistributionData");
