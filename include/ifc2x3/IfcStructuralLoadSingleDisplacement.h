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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralLoadStatic.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadSingleDisplacement : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'DisplacementX'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementX();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementX'.
         * 
         * @return the value of the explicit attribute 'DisplacementX'
         */
        virtual const IfcLengthMeasure getDisplacementX() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementX'.
         * 
         * @param value
         */
        virtual void setDisplacementX(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'DisplacementY'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementY();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementY'.
         * 
         * @return the value of the explicit attribute 'DisplacementY'
         */
        virtual const IfcLengthMeasure getDisplacementY() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementY'.
         * 
         * @param value
         */
        virtual void setDisplacementY(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'DisplacementZ'.
         * 
         */
        virtual IfcLengthMeasure getDisplacementZ();
        /**
         * (const) Returns the value of the explicit attribute 'DisplacementZ'.
         * 
         * @return the value of the explicit attribute 'DisplacementZ'
         */
        virtual const IfcLengthMeasure getDisplacementZ() const;
        /**
         * Sets the value of the explicit attribute 'DisplacementZ'.
         * 
         * @param value
         */
        virtual void setDisplacementZ(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRX();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRX'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRX() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRX(IfcPlaneAngleMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRY();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRY'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRY() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRY(IfcPlaneAngleMeasure value);
        /**
         * Gets the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         */
        virtual IfcPlaneAngleMeasure getRotationalDisplacementRZ();
        /**
         * (const) Returns the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         * @return the value of the explicit attribute 'RotationalDisplacementRZ'
         */
        virtual const IfcPlaneAngleMeasure getRotationalDisplacementRZ() const;
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         * @param value
         */
        virtual void setRotationalDisplacementRZ(IfcPlaneAngleMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleDisplacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_displacementX;
        /**
         */
        Step::Real m_displacementY;
        /**
         */
        Step::Real m_displacementZ;
        /**
         */
        Step::Real m_rotationalDisplacementRX;
        /**
         */
        Step::Real m_rotationalDisplacementRY;
        /**
         */
        Step::Real m_rotationalDisplacementRZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
