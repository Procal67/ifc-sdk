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

#ifndef IFC2X3_IFCLSHAPEPROFILEDEF_H
#define IFC2X3_IFCLSHAPEPROFILEDEF_H
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
    class IFC2X3_DLL_DEF IfcLShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcPositiveLengthMeasure getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Thickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getThickness();
        /**
         * (const) Returns the value of the explicit attribute 'Thickness'.
         * 
         * @return the value of the explicit attribute 'Thickness'
         */
        virtual const IfcPositiveLengthMeasure getThickness() const;
        /**
         * Sets the value of the explicit attribute 'Thickness'.
         * 
         * @param value
         */
        virtual void setThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FilletRadius'.
         * 
         * @return the value of the explicit attribute 'FilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'EdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'EdgeRadius'.
         * 
         * @return the value of the explicit attribute 'EdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'EdgeRadius'.
         * 
         * @param value
         */
        virtual void setEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'LegSlope'.
         * 
         */
        virtual IfcPlaneAngleMeasure getLegSlope();
        /**
         * (const) Returns the value of the explicit attribute 'LegSlope'.
         * 
         * @return the value of the explicit attribute 'LegSlope'
         */
        virtual const IfcPlaneAngleMeasure getLegSlope() const;
        /**
         * Sets the value of the explicit attribute 'LegSlope'.
         * 
         * @param value
         */
        virtual void setLegSlope(IfcPlaneAngleMeasure value);
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInX'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInX() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
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
        IfcLShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcLShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_thickness;
        /**
         */
        Step::Real m_filletRadius;
        /**
         */
        Step::Real m_edgeRadius;
        /**
         */
        Step::Real m_legSlope;
        /**
         */
        Step::Real m_centreOfGravityInX;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCLSHAPEPROFILEDEF_H
