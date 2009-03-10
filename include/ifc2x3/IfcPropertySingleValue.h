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

#ifndef IFC2X3_IFCPROPERTYSINGLEVALUE_H
#define IFC2X3_IFCPROPERTYSINGLEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;
    class IfcValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertySingleValue : public IfcSimpleProperty {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'NominalValue'.
         * 
         */
        virtual IfcValue *getNominalValue();
        /**
         * (const) Returns the value of the explicit attribute 'NominalValue'.
         * 
         * @return the value of the explicit attribute 'NominalValue'
         */
        virtual const IfcValue *getNominalValue() const;
        /**
         * Sets the value of the explicit attribute 'NominalValue'.
         * 
         * @param value
         */
        virtual void setNominalValue(const Step::RefPtr< IfcValue > &value);
        /**
         * Gets the value of the explicit attribute 'Unit'.
         * 
         */
        virtual IfcUnit *getUnit();
        /**
         * (const) Returns the value of the explicit attribute 'Unit'.
         * 
         * @return the value of the explicit attribute 'Unit'
         */
        virtual const IfcUnit *getUnit() const;
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        virtual void setUnit(const Step::RefPtr< IfcUnit > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertySingleValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertySingleValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertySingleValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_nominalValue;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;

    };

}

#endif // IFC2X3_IFCPROPERTYSINGLEVALUE_H
