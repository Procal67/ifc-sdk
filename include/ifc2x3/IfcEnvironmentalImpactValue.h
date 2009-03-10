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

#ifndef IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#define IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcAppliedValue.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcEnvironmentalImpactValue : public IfcAppliedValue {
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
         * Gets the value of the explicit attribute 'ImpactType'.
         * 
         */
        virtual IfcLabel getImpactType();
        /**
         * (const) Returns the value of the explicit attribute 'ImpactType'.
         * 
         * @return the value of the explicit attribute 'ImpactType'
         */
        virtual const IfcLabel getImpactType() const;
        /**
         * Sets the value of the explicit attribute 'ImpactType'.
         * 
         * @param value
         */
        virtual void setImpactType(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Category'.
         * 
         */
        virtual IfcEnvironmentalImpactCategoryEnum getCategory();
        /**
         * (const) Returns the value of the explicit attribute 'Category'.
         * 
         * @return the value of the explicit attribute 'Category'
         */
        virtual const IfcEnvironmentalImpactCategoryEnum getCategory() const;
        /**
         * Sets the value of the explicit attribute 'Category'.
         * 
         * @param value
         */
        virtual void setCategory(IfcEnvironmentalImpactCategoryEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedCategory'.
         * 
         */
        virtual IfcLabel getUserDefinedCategory();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedCategory'.
         * 
         * @return the value of the explicit attribute 'UserDefinedCategory'
         */
        virtual const IfcLabel getUserDefinedCategory() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedCategory'.
         * 
         * @param value
         */
        virtual void setUserDefinedCategory(const IfcLabel &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcEnvironmentalImpactValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_impactType;
        /**
         */
        IfcEnvironmentalImpactCategoryEnum m_category;
        /**
         */
        Step::String m_userDefinedCategory;

    };

}

#endif // IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
