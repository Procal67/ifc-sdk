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

#ifndef IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#define IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcParameterizedProfileDef.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcCraneRailFShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'OverallHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallHeight();
        /**
         * (const) Returns the value of the explicit attribute 'OverallHeight'.
         * 
         * @return the value of the explicit attribute 'OverallHeight'
         */
        virtual const IfcPositiveLengthMeasure getOverallHeight() const;
        /**
         * Sets the value of the explicit attribute 'OverallHeight'.
         * 
         * @param value
         */
        virtual void setOverallHeight(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'HeadWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadWidth();
        /**
         * (const) Returns the value of the explicit attribute 'HeadWidth'.
         * 
         * @return the value of the explicit attribute 'HeadWidth'
         */
        virtual const IfcPositiveLengthMeasure getHeadWidth() const;
        /**
         * Sets the value of the explicit attribute 'HeadWidth'.
         * 
         * @param value
         */
        virtual void setHeadWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Radius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRadius();
        /**
         * (const) Returns the value of the explicit attribute 'Radius'.
         * 
         * @return the value of the explicit attribute 'Radius'
         */
        virtual const IfcPositiveLengthMeasure getRadius() const;
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        virtual void setRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'HeadDepth2'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadDepth2();
        /**
         * (const) Returns the value of the explicit attribute 'HeadDepth2'.
         * 
         * @return the value of the explicit attribute 'HeadDepth2'
         */
        virtual const IfcPositiveLengthMeasure getHeadDepth2() const;
        /**
         * Sets the value of the explicit attribute 'HeadDepth2'.
         * 
         * @param value
         */
        virtual void setHeadDepth2(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'HeadDepth3'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadDepth3();
        /**
         * (const) Returns the value of the explicit attribute 'HeadDepth3'.
         * 
         * @return the value of the explicit attribute 'HeadDepth3'
         */
        virtual const IfcPositiveLengthMeasure getHeadDepth3() const;
        /**
         * Sets the value of the explicit attribute 'HeadDepth3'.
         * 
         * @param value
         */
        virtual void setHeadDepth3(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WebThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WebThickness'.
         * 
         * @return the value of the explicit attribute 'WebThickness'
         */
        virtual const IfcPositiveLengthMeasure getWebThickness() const;
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'BaseDepth1'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBaseDepth1();
        /**
         * (const) Returns the value of the explicit attribute 'BaseDepth1'.
         * 
         * @return the value of the explicit attribute 'BaseDepth1'
         */
        virtual const IfcPositiveLengthMeasure getBaseDepth1() const;
        /**
         * Sets the value of the explicit attribute 'BaseDepth1'.
         * 
         * @param value
         */
        virtual void setBaseDepth1(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'BaseDepth2'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBaseDepth2();
        /**
         * (const) Returns the value of the explicit attribute 'BaseDepth2'.
         * 
         * @return the value of the explicit attribute 'BaseDepth2'
         */
        virtual const IfcPositiveLengthMeasure getBaseDepth2() const;
        /**
         * Sets the value of the explicit attribute 'BaseDepth2'.
         * 
         * @param value
         */
        virtual void setBaseDepth2(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCraneRailFShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallHeight;
        /**
         */
        Step::Real m_headWidth;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_headDepth2;
        /**
         */
        Step::Real m_headDepth3;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_baseDepth1;
        /**
         */
        Step::Real m_baseDepth2;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
