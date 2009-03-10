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

#ifndef IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
#define IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcMaterialProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcProductsOfCombustionProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         */
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        /**
         * (const) Returns the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @return the value of the explicit attribute 'SpecificHeatCapacity'
         */
        virtual const IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity() const;
        /**
         * Sets the value of the explicit attribute 'SpecificHeatCapacity'.
         * 
         * @param value
         */
        virtual void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        /**
         * Gets the value of the explicit attribute 'N20Content'.
         * 
         */
        virtual IfcPositiveRatioMeasure getN20Content();
        /**
         * (const) Returns the value of the explicit attribute 'N20Content'.
         * 
         * @return the value of the explicit attribute 'N20Content'
         */
        virtual const IfcPositiveRatioMeasure getN20Content() const;
        /**
         * Sets the value of the explicit attribute 'N20Content'.
         * 
         * @param value
         */
        virtual void setN20Content(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'COContent'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCOContent();
        /**
         * (const) Returns the value of the explicit attribute 'COContent'.
         * 
         * @return the value of the explicit attribute 'COContent'
         */
        virtual const IfcPositiveRatioMeasure getCOContent() const;
        /**
         * Sets the value of the explicit attribute 'COContent'.
         * 
         * @param value
         */
        virtual void setCOContent(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'CO2Content'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCO2Content();
        /**
         * (const) Returns the value of the explicit attribute 'CO2Content'.
         * 
         * @return the value of the explicit attribute 'CO2Content'
         */
        virtual const IfcPositiveRatioMeasure getCO2Content() const;
        /**
         * Sets the value of the explicit attribute 'CO2Content'.
         * 
         * @param value
         */
        virtual void setCO2Content(IfcPositiveRatioMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductsOfCombustionProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_specificHeatCapacity;
        /**
         */
        Step::Real m_n20Content;
        /**
         */
        Step::Real m_cOContent;
        /**
         */
        Step::Real m_cO2Content;

    };

}

#endif // IFC2X3_IFCPRODUCTSOFCOMBUSTIONPROPERTIES_H
