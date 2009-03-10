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

#ifndef IFC2X3_IFCMEASUREWITHUNIT_H
#define IFC2X3_IFCMEASUREWITHUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;
    class IfcValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcMeasureWithUnit : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ValueComponent'.
         * 
         */
        virtual IfcValue *getValueComponent();
        /**
         * (const) Returns the value of the explicit attribute 'ValueComponent'.
         * 
         * @return the value of the explicit attribute 'ValueComponent'
         */
        virtual const IfcValue *getValueComponent() const;
        /**
         * Sets the value of the explicit attribute 'ValueComponent'.
         * 
         * @param value
         */
        virtual void setValueComponent(const Step::RefPtr< IfcValue > &value);
        /**
         * Gets the value of the explicit attribute 'UnitComponent'.
         * 
         */
        virtual IfcUnit *getUnitComponent();
        /**
         * (const) Returns the value of the explicit attribute 'UnitComponent'.
         * 
         * @return the value of the explicit attribute 'UnitComponent'
         */
        virtual const IfcUnit *getUnitComponent() const;
        /**
         * Sets the value of the explicit attribute 'UnitComponent'.
         * 
         * @param value
         */
        virtual void setUnitComponent(const Step::RefPtr< IfcUnit > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMeasureWithUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcMeasureWithUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMeasureWithUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_valueComponent;
        /**
         */
        Step::RefPtr< IfcUnit > m_unitComponent;

    };

}

#endif // IFC2X3_IFCMEASUREWITHUNIT_H
