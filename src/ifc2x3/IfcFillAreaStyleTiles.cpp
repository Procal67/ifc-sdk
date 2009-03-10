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

#include "ifc2x3/IfcFillAreaStyleTiles.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFillAreaStyleTileShapeSelect.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcOneDirectionRepeatFactor.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFillAreaStyleTiles::IfcFillAreaStyleTiles(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_tilingPattern = NULL;
    m_tilingScale = Step::getUnset(m_tilingScale);
}

IfcFillAreaStyleTiles::~IfcFillAreaStyleTiles() {
}

bool IfcFillAreaStyleTiles::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyleTiles(this);
}

const std::string &IfcFillAreaStyleTiles::type() const {
    return IfcFillAreaStyleTiles::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyleTiles::getClassType() {
    return IfcFillAreaStyleTiles::s_type;
}

const Step::ClassType &IfcFillAreaStyleTiles::getType() const {
    return IfcFillAreaStyleTiles::s_type;
}

bool IfcFillAreaStyleTiles::isOfType(const Step::ClassType &t) const {
    return IfcFillAreaStyleTiles::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcOneDirectionRepeatFactor *IfcFillAreaStyleTiles::getTilingPattern() {
    if (Step::BaseObject::inited()) {
        return m_tilingPattern.get();
    }
    else {
        return NULL;
    }
}

const IfcOneDirectionRepeatFactor *IfcFillAreaStyleTiles::getTilingPattern() const {
    IfcFillAreaStyleTiles * deConstObject = const_cast< IfcFillAreaStyleTiles * > (this);
    return deConstObject->getTilingPattern();
}

void IfcFillAreaStyleTiles::setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value) {
    m_tilingPattern = value;
}

Set_IfcFillAreaStyleTileShapeSelect_1_n &IfcFillAreaStyleTiles::getTiles() {
    if (Step::BaseObject::inited()) {
        return m_tiles;
    }
    else {
        m_tiles.setUnset(true);
        return m_tiles;
    }
}

const Set_IfcFillAreaStyleTileShapeSelect_1_n &IfcFillAreaStyleTiles::getTiles() const {
    IfcFillAreaStyleTiles * deConstObject = const_cast< IfcFillAreaStyleTiles * > (this);
    return deConstObject->getTiles();
}

void IfcFillAreaStyleTiles::setTiles(const Set_IfcFillAreaStyleTileShapeSelect_1_n &value) {
    m_tiles = value;
}

IfcPositiveRatioMeasure IfcFillAreaStyleTiles::getTilingScale() {
    if (Step::BaseObject::inited()) {
        return m_tilingScale;
    }
    else {
        return Step::getUnset(m_tilingScale);
    }
}

const IfcPositiveRatioMeasure IfcFillAreaStyleTiles::getTilingScale() const {
    IfcFillAreaStyleTiles * deConstObject = const_cast< IfcFillAreaStyleTiles * > (this);
    return deConstObject->getTilingScale();
}

void IfcFillAreaStyleTiles::setTilingScale(IfcPositiveRatioMeasure value) {
    m_tilingScale = value;
}

bool IfcFillAreaStyleTiles::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tilingPattern = NULL;
    }
    else {
        m_tilingPattern = static_cast< IfcOneDirectionRepeatFactor * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tiles.setUnset(true);
    }
    else {
        m_tiles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFillAreaStyleTileShapeSelect > attr2;
                attr2 = new IfcFillAreaStyleTileShapeSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_tiles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tilingScale = Step::getUnset(m_tilingScale);
    }
    else {
        m_tilingScale = Step::spfToReal(arg);
    }
    return true;
}

void IfcFillAreaStyleTiles::copy(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFillAreaStyleTileShapeSelect >, 1 >::const_iterator it_m_tiles;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setTilingPattern((IfcOneDirectionRepeatFactor*)copyop(obj.m_tilingPattern.get()));
    for (it_m_tiles = obj.m_tiles.begin(); it_m_tiles != obj.m_tiles.end(); ++it_m_tiles) {
        Step::RefPtr< IfcFillAreaStyleTileShapeSelect > copyTarget = new IfcFillAreaStyleTileShapeSelect;
        copyTarget->copy(*((*it_m_tiles).get()), copyop);
        m_tiles.insert(copyTarget.get());
    }
    setTilingScale(obj.m_tilingScale);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTiles::s_type("IfcFillAreaStyleTiles");
