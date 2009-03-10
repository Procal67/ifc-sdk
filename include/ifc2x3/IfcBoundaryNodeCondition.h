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

#ifndef IFC2X3_IFCBOUNDARYNODECONDITION_H
#define IFC2X3_IFCBOUNDARYNODECONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundaryCondition.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcBoundaryNodeCondition : public IfcBoundaryCondition {
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
         * Gets the value of the explicit attribute 'LinearStiffnessX'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessX'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessX'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessX() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessX'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessX(IfcLinearStiffnessMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessY'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessY'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessY'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessY() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessY'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessY(IfcLinearStiffnessMeasure value);
        /**
         * Gets the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         */
        virtual IfcLinearStiffnessMeasure getLinearStiffnessZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         * @return the value of the explicit attribute 'LinearStiffnessZ'
         */
        virtual const IfcLinearStiffnessMeasure getLinearStiffnessZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearStiffnessZ'.
         * 
         * @param value
         */
        virtual void setLinearStiffnessZ(IfcLinearStiffnessMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessX();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessX'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessX() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessX'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessX(IfcRotationalStiffnessMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessY();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessY'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessY() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessY'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessY(IfcRotationalStiffnessMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         */
        virtual IfcRotationalStiffnessMeasure getRotationalStiffnessZ();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         * @return the value of the explicit attribute 'RotationalStiffnessZ'
         */
        virtual const IfcRotationalStiffnessMeasure getRotationalStiffnessZ() const;
        /**
         * Sets the value of the explicit attribute 'RotationalStiffnessZ'.
         * 
         * @param value
         */
        virtual void setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundaryNodeCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundaryNodeCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearStiffnessX;
        /**
         */
        Step::Real m_linearStiffnessY;
        /**
         */
        Step::Real m_linearStiffnessZ;
        /**
         */
        Step::Real m_rotationalStiffnessX;
        /**
         */
        Step::Real m_rotationalStiffnessY;
        /**
         */
        Step::Real m_rotationalStiffnessZ;

    };

}

#endif // IFC2X3_IFCBOUNDARYNODECONDITION_H
