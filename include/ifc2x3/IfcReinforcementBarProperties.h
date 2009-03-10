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

#ifndef IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#define IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcReinforcementBarProperties : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getTotalCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'TotalCrossSectionArea'
         */
        virtual const IfcAreaMeasure getTotalCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         * @param value
         */
        virtual void setTotalCrossSectionArea(IfcAreaMeasure value);
        /**
         * Gets the value of the explicit attribute 'SteelGrade'.
         * 
         */
        virtual IfcLabel getSteelGrade();
        /**
         * (const) Returns the value of the explicit attribute 'SteelGrade'.
         * 
         * @return the value of the explicit attribute 'SteelGrade'
         */
        virtual const IfcLabel getSteelGrade() const;
        /**
         * Sets the value of the explicit attribute 'SteelGrade'.
         * 
         * @param value
         */
        virtual void setSteelGrade(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'BarSurface'.
         * 
         */
        virtual IfcReinforcingBarSurfaceEnum getBarSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BarSurface'.
         * 
         * @return the value of the explicit attribute 'BarSurface'
         */
        virtual const IfcReinforcingBarSurfaceEnum getBarSurface() const;
        /**
         * Sets the value of the explicit attribute 'BarSurface'.
         * 
         * @param value
         */
        virtual void setBarSurface(IfcReinforcingBarSurfaceEnum value);
        /**
         * Gets the value of the explicit attribute 'EffectiveDepth'.
         * 
         */
        virtual IfcLengthMeasure getEffectiveDepth();
        /**
         * (const) Returns the value of the explicit attribute 'EffectiveDepth'.
         * 
         * @return the value of the explicit attribute 'EffectiveDepth'
         */
        virtual const IfcLengthMeasure getEffectiveDepth() const;
        /**
         * Sets the value of the explicit attribute 'EffectiveDepth'.
         * 
         * @param value
         */
        virtual void setEffectiveDepth(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'NominalBarDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalBarDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'NominalBarDiameter'.
         * 
         * @return the value of the explicit attribute 'NominalBarDiameter'
         */
        virtual const IfcPositiveLengthMeasure getNominalBarDiameter() const;
        /**
         * Sets the value of the explicit attribute 'NominalBarDiameter'.
         * 
         * @param value
         */
        virtual void setNominalBarDiameter(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'BarCount'.
         * 
         */
        virtual IfcCountMeasure getBarCount();
        /**
         * (const) Returns the value of the explicit attribute 'BarCount'.
         * 
         * @return the value of the explicit attribute 'BarCount'
         */
        virtual const IfcCountMeasure getBarCount() const;
        /**
         * Sets the value of the explicit attribute 'BarCount'.
         * 
         * @param value
         */
        virtual void setBarCount(IfcCountMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcementBarProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_totalCrossSectionArea;
        /**
         */
        Step::String m_steelGrade;
        /**
         */
        IfcReinforcingBarSurfaceEnum m_barSurface;
        /**
         */
        Step::Real m_effectiveDepth;
        /**
         */
        Step::Real m_nominalBarDiameter;
        /**
         */
        Step::Number m_barCount;

    };

}

#endif // IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
